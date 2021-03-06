#ifndef OPENNI1ACQUISITION_H_INCLUDED
#define OPENNI1ACQUISITION_H_INCLUDED


#ifdef __cplusplus
extern "C"
{
#endif

   #include "../acquisition/acquisition_setup.h"

   #if USE_CALIBRATION
    #include "../tools/Calibration/calibration.h"
   #endif


   //Initialization of OpenNI1
   int startOpenNI1Module(unsigned int max_devs,const char * settings);

   #if BUILD_OPENNI1


   int getOpenNI1NumberOfDevices(); // This has to be called AFTER startOpenNI1
   int stopOpenNI1Module();

   int mapOpenNI1DepthToRGB(int devID);
   int mapOpenNI1RGBToDepth(int devID);

   //Basic Per Device Operations
   int createOpenNI1Device(int devID,const char * devName,unsigned int width,unsigned int height,unsigned int framerate);
   int destroyOpenNI1Device(int devID);
   int snapOpenNI1Frames(int devID);


   int getTotalOpenNI1FrameNumber(int devID);
   int getCurrentOpenNI1FrameNumber(int devID);

   //Color Frame getters
   int getOpenNI1ColorWidth(int devID);
   int getOpenNI1ColorHeight(int devID);
   int getOpenNI1ColorDataSize(int devID);
   int getOpenNI1ColorChannels(int devID);
   int getOpenNI1ColorBitsPerPixel(int devID);
   char * getOpenNI1ColorPixels(int devID);

   double getOpenNI1ColorFocalLength(int devID);
   double getOpenNI1ColorPixelSize(int devID);

   //Depth Frame getters
   int getOpenNI1DepthWidth(int devID);
   int getOpenNI1DepthHeight(int devID);
   int getOpenNI1DepthDataSize(int devID);
   int getOpenNI1DepthChannels(int devID);
   int getOpenNI1DepthBitsPerPixel(int devID);
   short * getOpenNI1DepthPixels(int devID);

   double getOpenNI1DepthFocalLength(int devID);
   double getOpenNI1DepthPixelSize(int devID);


   #if USE_CALIBRATION
    int getOpenNI1ColorCalibration(int devID,struct calibration * calib);
    int getOpenNI1DepthCalibration(int devID,struct calibration * calib);

    int setOpenNI1ColorCalibration(int devID,struct calibration * calib);
    int setOpenNI1DepthCalibration(int devID,struct calibration * calib);
   #endif


   #endif

#ifdef __cplusplus
}
#endif

#endif // OPENNI1ACQUISITION_H_INCLUDED
