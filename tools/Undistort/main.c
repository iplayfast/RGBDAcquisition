#include <stdio.h>
#include <stdlib.h>

#include "../Codecs/codecs.h"

struct resectionData
{
  unsigned int * directMapping;
  unsigned int * pointsListThatNeedInterpolation;
};



int printOutDirectMap( struct resectionData * res , unsigned int width ,unsigned int height , char * filename )
{
    FILE * fp = fopen(filename,"w");
    if (fp==0) { return 0; }

   int  i=0;
   for (i=0; i<width*height; i++)
   {
     fprintf(fp,"%u ",res->directMapping[i]);
   }
   fclose(fp);

    return 1;
}



int interpolateHolesInResectioning( struct resectionData * res , unsigned int width , unsigned int height)
{
 //This should populate res->pointsListThatNeedInterpolation
 //For now i am just trying to fill some holes with stupid uninterpolated values
 unsigned int * M = res->directMapping;
 unsigned int holes=0,filled=0;

  /*
      A B C   A is i-width , B is i-1-width , C is i+1-width
      D E F   E is i       , D is i-1       , F is i+1
      G H I   G is i+width , H is i-1+width , I is i+1+width
  */

 unsigned int convElements[9]={0};

 fprintf(stderr,"Interpolating holes in generated resectioning\n");
 unsigned int i=0,x=0,y=0;
 for (y=1; y<height-1; y++)
 {
   i=y * width;
   for (x=1; x<width-1; x++)
   {
     ++i;

     convElements[4]=i-1; convElements[5]=i; convElements[6]=i+1;
     convElements[1]=convElements[4]-width; convElements[2]=convElements[5]-width; convElements[3]=convElements[6]-width;
     convElements[7]=convElements[4]+width; convElements[8]=convElements[5]+width; convElements[9]=convElements[6]+width;


     if (M[i]==0)
       {
         ++holes;
         if (M[convElements[1]]!=0) { M[i] = M[convElements[1]]; ++filled; }
         if (M[convElements[2]]!=0) { M[i] = M[convElements[2]]; ++filled; }
         if (M[convElements[3]]!=0) { M[i] = M[convElements[3]]; ++filled; }

         if (M[convElements[4]]!=0) { M[i] = M[convElements[4]]; ++filled; }

         if (M[convElements[5]]!=0) { M[i] = M[convElements[5]]; ++filled; }

         if (M[convElements[6]]!=0) { M[i] = M[convElements[6]]; ++filled; }
         if (M[convElements[7]]!=0) { M[i] = M[convElements[7]]; ++filled; }
         if (M[convElements[8]]!=0) { M[i] = M[convElements[8]]; ++filled; }

       }
   }
 }
 fprintf(stderr,"Found %u holes , %u filled pixels\n",holes,filled);
 fprintf(stderr,"Total holes should be %u \n",(width*height)-filled);
 fprintf(stderr,"Unaccounted holes remaining %u \n",(width*height)-filled-holes);
 printOutDirectMap(res,width,height,"directMap.txt");

 return 1;
}





/*

   RectifiedPoint = M * OriginalPoint

   Rectified Point = [ new_x new_y new_w ]
   Original Point  = [ x y w ]

         |fx  0   cx|       a   b   c
   M =   |0   fy  cy|       d   e   f
         |0   0   1 |       g   h   i
*/
struct resectionData * precalculateResectioning( unsigned int width , unsigned int height,
                                                                    double fx,double fy , double cx,double cy ,
                                                                    double k1,double k2 , double p1,double p2 , double k3 )
{
   struct resectionData * res = (struct resectionData *) malloc (sizeof(struct resectionData));
   if (res==0) { fprintf(stderr,"Could not allocate memory for resectioning structure\n"); return 0; }
   res->directMapping = (unsigned int *) malloc (width * height * sizeof(unsigned int));
   if (res->directMapping==0) { fprintf(stderr,"Could not allocate memory for resectioning structure\n"); return 0; }
   memset(res->directMapping,0,width * height * sizeof(unsigned int));
   res->pointsListThatNeedInterpolation = 0;

  unsigned int * frame = res->directMapping;

  fprintf(stderr,"Calibrating for fx=%f fy=%f cx=%f cy=%f\n",fx,fy,cx,cy);
  fprintf(stderr,"k1=%f k2=%f p1=%f p2=%f k3=%f \n",k1,k2,p1,p2,k3);

  if ( ( fx == 0.0) || ( fy == 0.0) || ( (k1==0.0)&&(k2==0.0)&&(k3==0.0) )) { fprintf(stderr,"Erroneous parameters calibration canceled\n"); return 0; }

  unsigned int i,x = width ,y= height , mem , new_mem , addressForErrors;
  unsigned int undistorted_x,undistorted_y;

  mem = 0;
  double ifx=1.f/fx,ify=1.f/fy;
  double dstdx,dstdy , distx,disty;
  double dx,dy;
  double r_sq = 0; // R Squared
  double r_cu = 0; // R Cubed
  double k_coefficient = 0;
  double new_x,new_y;

  // SEE http://opencv.willowgarage.com/documentation/camera_calibration_and_3d_reconstruction.html
  // https://code.ros.org/trac/opencv/browser/trunk/opencv/src/cv/cvundistort.cpp?rev=18
  // https://code.ros.org/trac/opencv/browser/trunk/opencv/modules/imgproc/src/undistort.cpp?rev=4885
  // http://tech.groups.yahoo.com/group/OpenCV/message/26019
  // Also Learning OpenCV page 375-377
  /*

Finaly fixed using code from Philip Gruebele @
http://tech.groups.yahoo.com/group/OpenCV/message/26019

archived at 3dpartylibs/code/undistort_point.cpp
*/
  unsigned int PrecisionErrors=0;
  unsigned int OffFrame=0;
  unsigned int OutOfMemory=0;


  for (y=0; y<height; y++)
  {
     addressForErrors=0;
     for (x=0; x<width; x++)
        {
          //Well this is supposed to rectify lens distortions based on calibration done with my image sets
          //but the values returned are way off ..
          dstdx = ( x - cx );
          dstdx *= ifx;

          dstdy = ( y - cy );
          dstdy *= ify;

          new_x = dstdx;
          new_y = dstdy;

          for ( i=0; i<5; i++)
           {
               r_sq = new_x*new_x;
               r_sq += new_y*new_y;

               r_cu = r_sq*r_sq;

               k_coefficient = 1;
               k_coefficient += k1 * r_sq;
               k_coefficient += k2 * r_cu;
               k_coefficient += k3 * r_cu * r_sq ;

               dx = 2 * p1 * new_x * new_y;
               dx += p2 * ( r_sq + 2 * new_x * new_x);

               dy = 2 * p2 * new_x * new_y;
               dy += p1 * ( r_sq + 2 * new_y * new_y);

               new_x = ( dstdx - dx );
               new_x /= k_coefficient;

               new_y = ( dstdy - dy );
               new_y /= k_coefficient;
           }

          dstdx = new_x;
          dstdy = new_y;

          dstdx *= fx; dstdx += cx;
          dstdy *= fy; dstdy += cy;


          undistorted_x = (unsigned int) round(dstdx);
          undistorted_y = (unsigned int) round(dstdy);



                   /* REVERSE CHECK ! >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
                   new_x = dstdx - cx; new_x /= fx;
                   new_y = dstdy - cy; new_y /= fy;

                   r_sq = new_x*new_x + new_y*new_y;
                   distx = new_x ;
                   distx += new_x*(k1*r_sq + k2*r_sq*r_sq);
                   distx += (2*p1*new_x*new_y + p2*(r_sq + 2*new_x*new_x));


                   disty = new_y;
                   disty +=new_y*(k1*r_sq + k2*r_sq*r_sq);
                   disty +=(2*p2*new_x*new_y + p1*(r_sq + 2*new_y*new_y));


                   distx *= fx; distx += cx;
                   disty *= fy; disty += cy;
                   /* <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/



      // This should never be more than .2 pixels...
      double diffx = x - distx;
      double diffy = y - disty;

         if ( (diffx> 0.1) || (diffy>0.1) )
          {
             /* ACCURACY ERROR , This means that we have a percision error in the way math is done*/
             //fprintf(stderr,"$%u,%u to %u,%u",x,y,undistorted_x,undistorted_y);
             new_mem = 0;
                 new_mem=addressForErrors ; //TEST THIS USESTHE INTERPOLATED TO GET RID OF SOME BLANK SPOT ARTIFACTS
             ++PrecisionErrors;
          }

          if ( ( undistorted_x >= width ) || ( undistorted_y >= height ) )
             {
                 // OFF RESULTS SHOULD BE INTERPOLATED WITH CLOSE MEMORY SPOTS
                 //fprintf(stderr,"!%u,%u to %u,%u",x,y,undistorted_x,undistorted_y);
                 new_mem = 0;
                 new_mem=addressForErrors ; //TEST THIS USESTHE INTERPOLATED TO GET RID OF SOME BLANK SPOT ARTIFACTS
                 ++OffFrame;
             } else
             {
                //We need the memory to point to the ->RGB address of the value
                new_mem = (undistorted_y * width * 3) + undistorted_x * 3 ;

                if ( new_mem>= (width * height * 3) )
                 {
                   new_mem = 0;
                   ++OutOfMemory;
                 }
                //fprintf(stderr,"%u,%u -> %u,%u .. \n",x,y,undistorted_x,undistorted_y);
             }

          frame [mem] = new_mem;
          ++mem;

       }
   }

 fprintf(stderr,"PrecalculationErrors - Precision=%u , OffFrame=%u , OutOfMemory=%u\n",PrecisionErrors,OffFrame,OutOfMemory);
 interpolateHolesInResectioning(res,width,height);


 return res;
}

int freeResectioning( struct resectionData * res)
{
  if (res!=0)
  {
    if (res->directMapping!=0 )  { free(res->directMapping); res->directMapping=0; }
    if (res->pointsListThatNeedInterpolation!=0 )  { free(res->pointsListThatNeedInterpolation); res->pointsListThatNeedInterpolation=0; }
    free(res);
    res = 0;
  }
  return 1;
}

int undistortImage(unsigned char * input , unsigned char * output , unsigned int width , unsigned int height , struct resectionData * res)
{
 if ( (input==0) || (output==0) ) { fprintf(stderr,"Cannot undistortImage , image is null\n"); return 0; }
 if ( (width==0) || (height==0) ) { fprintf(stderr,"Cannot undistortImage , image input/output has null dimensions\n"); return 0; }
 if ( res==0) { fprintf(stderr,"Cannot undistortImage , resectionData is null\n"); return 0; }

 unsigned int memLimit = width * height ;
 unsigned int * M = res->directMapping;
 unsigned int ptr=0 , oldSource = 0, newTarget = 0, ptr_end = memLimit;
 memset(output,0,memLimit*3*sizeof(unsigned char));


 for (ptr=0; ptr<ptr_end; ptr++)
 {
  newTarget = M[ptr];
  oldSource  = ptr*3;
  output[newTarget] = input[oldSource]; //Move R
  ++newTarget; ++oldSource;
  output[newTarget] = input[oldSource]; //Move G
  ++newTarget; ++oldSource ;
  output[newTarget] = input[oldSource]; //Move B
 }

return 1;
}


int main(int argc, char** argv)
{
   if( argc < 12)
   {
     fprintf(stderr,"Provided %u arguments\n",argc);
     printf(" Usage: undistort ImageToLoadAndUndistort Output fx fy cx cy k1 k2 p1 p2 k3\n");
     return 1;
   }

  struct Image * img  = readImage(argv[1],PPM_CODEC,0);
  if (img==0) { fprintf(stderr,"Could not open file %s \n",argv[1]); return 1; }

  double fx = 535.784106 , fy = 534.223354 , cx = 312.428312 , cy = 243.889369;
  double k1 = 0.021026 , k2 = -0.069355 , p1 = 0.000598 , p2 = 0.001729 , k3 = 0.0;

  struct resectionData *   res = precalculateResectioning(img->width,img->height,fx,fy,cx,cy,k1,k2,p1,p2,k3);
  if (res==0) { fprintf(stderr,"Could not generate resection data for file %s \n",argv[1]); return 1; }

  struct Image * undistortedImg = createImage(img->width,img->height , img->channels , img->bitsperpixel );
  if (undistortedImg==0) { fprintf(stderr,"Could not generate output image file to hold %s \n",argv[2]); return 1; }


  undistortImage(img->pixels, undistortedImg->pixels , img->width , img->height , res );

  writeImageFile(undistortedImg,PPM_CODEC,argv[2]);

  destroyImage(img);
  destroyImage(undistortedImg);


  freeResectioning(res);

  printf("done.. \n");

  return 0;
}