/** @file OpenGLAcquisition.h
 *  @brief  A module that emulates RGBDAcquisition from an OpenGL context
 *  @author Ammar Qammaz (AmmarkoV)
 */


#ifndef OPENGL_ACQUISITION_H_INCLUDED
#define OPENGL_ACQUISITION_H_INCLUDED




#include "../tools/Calibration/calibration.h"

#ifdef __cplusplus
extern "C"
{
#endif


#include "../acquisition/acquisition_setup.h"


int startOpenGLModule(unsigned int max_devs,const char * settings);

#if BUILD_OPENGL
int getOpenGLNumberOfDevices() ;
int stopOpenGLModule() ;
int createOpenGLDevice(int devID,const char * devName,unsigned int width,unsigned int height,unsigned int framerate) ;
int destroyOpenGLDevice(int devID) ;


int passUserCommandOpenGL(const char * command,const char * value);
int passUserInputOpenGL(int devID,char key,int state,unsigned int x, unsigned int y);

int changeOGLRendererGrabMode(unsigned int sequentialModeOn);

int seekRelativeOpenGLFrame(int devID,signed int seekFrame);
int seekOpenGLFrame(int devID,unsigned int seekFrame);
int snapOpenGLFrames(int devID) ;

//Color Frame getters
int getOpenGLColorWidth(int devID) ;
int getOpenGLColorHeight(int devID) ;
int getOpenGLColorDataSize(int devID);
int getOpenGLColorChannels(int devID);
int getOpenGLColorBitsPerPixel(int devID);
char * getOpenGLColorPixels(int devID) ;
int saveOpenGLColorFramePNM(int devID,char * filename) ;

double getOpenGLColorFocalLength(int devID);
double getOpenGLColorPixelSize(int devID);


int getOpenGLColorCalibration(int devID,struct calibration * calib);
int getOpenGLDepthCalibration(int devID,struct calibration * calib);

int setOpenGLColorCalibration(int devID,struct calibration * calib);
int setOpenGLDepthCalibration(int devID,struct calibration * calib);

   //Depth Frame getters
int getOpenGLDepthWidth(int devID) ;
int getOpenGLDepthHeight(int devID) ;
int getOpenGLDepthDataSize(int devID) ;
int getOpenGLDepthChannels(int devID);
int getOpenGLDepthBitsPerPixel(int devID);
char * getOpenGLDepthPixels(int devID) ;
int saveOpenGLDepthFramePNM(int devID,char * filename) ;

double getOpenGLDepthFocalLength(int devID);
double getOpenGLDepthPixelSize(int devID);
#endif // BUILD_OPENGL


#ifdef __cplusplus
}
#endif

#endif // TEMPLATEACQUISITION_H_INCLUDED
