#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "DarknetProcessor.h"
#include "../../tools/ImageOperations/imageOps.h"
#include "../../3dparty/darknet/include/darknet.h"

unsigned int framesProcessed=0;


struct darknetContext
{
 image **alphabet;
 network * net;
 layer l;

 float nms;
 box *boxes;
 float **probs;
 float **masks;
 char **names;// = get_labels(name_list);

 float *avg;

 float threshold;
 float hierarchyThreshold;
};


struct darknetContext dc={0};


image load_image_from_buffer(void * pixels , unsigned int width, unsigned int height, unsigned int channels)
{
    unsigned char * data = (unsigned char*) pixels;
    int w=width, h=height, c=channels , step=width*channels;
    int i,j,k;
    image im = make_image(w, h, c);


    for(i = 0; i < h; ++i)
    {
      for(k= 0; k < c; ++k)
        {
            for(j = 0; j < w; ++j)
            {
                im.data[k*w*h + i*w + j] = (float) data[i*step + j*c + k]/255.1; //Prevent saturation
            }
        }
    }

    //free(data);
    return im;
}




int init_yolo(
                const char *cfgfile,
                const char *weightfile,
                const char *datafile,
                float thresh
               )
{
    if (!cfgfile)    { return 0; }
    if (!weightfile) { return 0; }
    if (!datafile) { return 0; }

    dc.alphabet = load_alphabet();


    list *options = read_data_cfg(datafile);
    int classes = option_find_int(options, "classes", 20);
    char *name_list = option_find_str(options, "names", "data/names.list");
    dc.names = get_labels(name_list);

    dc.net = load_network(cfgfile, weightfile, 0);
    set_batch_network(dc.net, 1);


    srand(2222222);

    dc.l = dc.net->layers[dc.net->n-1];
    dc.nms=.4;
    dc.threshold=thresh;
    dc.hierarchyThreshold=0.5;

    dc.avg = (float *)   calloc(dc.l.outputs, sizeof(float));

    dc.boxes = (box *)   calloc( dc.l.w * dc.l.h * dc.l.n, sizeof(box));
    dc.probs = (float **)calloc( dc.l.w * dc.l.h * dc.l.n, sizeof(float *));

    int j;
    for(j = 0; j < dc.l.w * dc.l.h * dc.l.n; ++j)
         { dc.probs[j] = (float *)calloc(dc.l.classes+1, sizeof(float)); }

     if (dc.l.coords > 4)
        {
            dc.masks = calloc(dc.l.w*dc.l.h*dc.l.n, sizeof(float*));
            for(j = 0; j < dc.l.w*dc.l.h*dc.l.n; ++j) dc.masks[j] = calloc(dc.l.coords-4, sizeof(float *));
        }

 return 1;
}

int initArgs_DarknetProcessor(int argc, char *argv[])
{
 char * cfgFile=0;
 char * weightFile=0;
 char * dataFile=0;
 float threshold=0.25;


 unsigned int i=0;
 for (i=0; i<argc; i++)
 {
   if (strstr(argv[i],".cfg")!=0) { cfgFile=argv[i]; }
   if (strstr(argv[i],".weights")!=0) { weightFile=argv[i]; }
   if (strstr(argv[i],".data")!=0) { dataFile=argv[i]; }
 }

 return init_yolo(
                   cfgFile,
                   weightFile,
                   dataFile,
                   threshold
                 );
}


int addDataInput_DarknetProcessor(unsigned int stream , void * data, unsigned int width, unsigned int height,unsigned int channels,unsigned int bitsperpixel)
{

 fprintf(stderr,"addDataInput_DarknetProcessor %u (%ux%u) channels=%u\n" , stream , width, height,channels);
 if (stream==0)
 {
    image im=load_image_from_buffer(data, width, height, channels);
    //image sized = resize_image(im, dc.net->w, dc.net->h);
    image sized = letterbox_image(im, dc.net->w, dc.net->h);


    layer l = dc.net->layers[dc.net->n-1];

    fprintf(stderr,"detecting.. ");
    float *prediction = network_predict(dc.net /*Neural Net*/, sized.data /*Search Image*/);
    fprintf(stderr,"done ( %u )\n",dc.l.outputs);


    float * predictionCurrent = (float *) calloc(l.outputs, sizeof(float));


    unsigned int detections =  l.w * l.h * l.n;


    if(l.type == DETECTION)   {
                               fprintf(stderr,"getting_detection_boxes .. ");
                               get_detection_boxes(l, 1, 1, dc.threshold, dc.probs, dc.boxes, 0);
                              }
                              else
    if (l.type == REGION)  {
                               fprintf(stderr,"getting_region_boxes .. ");
                               get_region_boxes(l, im.w, im.h, dc.net->w, dc.net->h, dc.threshold, dc.probs, dc.boxes, 0, 0, 0, dc.hierarchyThreshold, 1);
                              } else
                              {
                               error("Last layer must produce detections\n");
                              }
    fprintf(stderr,"done\n");



    if (dc.nms)
         { do_nms_sort(dc.boxes, dc.probs, l.w*l.h*l.n, l.classes, dc.nms); }

    printf("Objects (%u classes):\n\n",l.classes);

    draw_detections(im, detections , dc.threshold, dc.boxes, dc.probs, dc.masks, dc.names , dc.alphabet, l.classes);
    save_image(im, "predictions");
    show_image(im, "predictions");

    free_image(im);
    free_image(sized);

   ++framesProcessed;
  return 1;
 }
 return 0;
}



int setConfigStr_DarknetProcessor(char * label,char * value)
{
 return 0;

}

int setConfigInt_DarknetProcessor(char * label,int value)
{
 return 0;

}

unsigned char * getDataOutput_DarknetProcessor(unsigned int stream , unsigned int * width, unsigned int * height,unsigned int * channels,unsigned int * bitsperpixel)
{
 return 0;
}

unsigned short * getDepth_DarknetProcessor(unsigned int * width, unsigned int * height,unsigned int * channels,unsigned int * bitsperpixel)
{
 return 0;

}

unsigned char * getColor_DarknetProcessor(unsigned int * width, unsigned int * height,unsigned int * channels,unsigned int * bitsperpixel)
{
 return 0;

}

int processData_DarknetProcessor()
{
 return 0;

}


int cleanup_DarknetProcessor()
{

 return 0;
}


int stop_DarknetProcessor()
{
 return 0;

}

