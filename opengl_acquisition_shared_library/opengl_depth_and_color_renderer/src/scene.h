/** @file scene.h
 *  @brief  Basic scene information
 *  @author Ammar Qammaz (AmmarkoV)
 */

#ifndef SCENE_H_INCLUDED
#define SCENE_H_INCLUDED



extern int WIDTH;
extern int HEIGHT;

extern float farPlane;
extern float nearPlane;
extern float scaleDepthTo;

extern int doCulling;

//extern float depthUnit;


extern unsigned int userKeyFOVEnabled;

extern int useIntrinsicMatrix;
extern double cameraMatrix[9];


extern int useCustomModelViewMatrix;
extern double customModelViewMatrix[16];
extern double customTranslation[3];
extern double customRodriguezRotation[3];

int sceneSeekTime(unsigned int seekTime);
int sceneIgnoreTime(unsigned int newSettingMode);

/**
* @brief Render A Scene
* @ingroup Scene
* @retval 1=Success , 0=Failure
*/
int renderScene();

/**
* @brief Update window size
* @ingroup Scene
* @param New Width
* @param New Height
* @retval 1=Success , 0=Failure
*/
int windowSizeUpdated(unsigned int newWidth , unsigned int newHeight);

int handleUserInput(char key,int state,unsigned int x, unsigned int y);

void * createPhotoshoot(
                        int objID,
                        unsigned int columns , unsigned int rows ,
                        float distance,
                        float angleX,float angleY,float angleZ ,
                        float angXVariance ,float angYVariance , float angZVariance
                       );


int setupPhotoshoot(
                     void * context,
                     int objID,
                     unsigned int columns , unsigned int rows ,
                     float distance,
                     float angleX,float angleY,float angleZ ,
                     float angXVariance ,float angYVariance , float angZVariance
                   );



/**
* @brief Render A Scene in "photoshoot" mode , means take multiple "photos" according to a createPhotoshoot context
* @ingroup Scene
* @param A context created with void * createPhotoshoot
* @retval 1=Success , 0=Failure
*/
int renderPhotoshoot( void * context );



/**
* @brief Initialize a scene using a configuration file
* @ingroup Scene
* @param String with a path to a configuration file
* @retval 1=Success , 0=Failure
*/
int initScene(char * confFile);

/**
* @brief Tick time so that model positions in the scene are updated
* @ingroup Scene
* @retval 1=Success , 0=Failure
*/
int tickScene(unsigned int framerate);


/**
* @brief Stop Using the Scene
* @ingroup Scene
* @retval 1=Success , 0=Failure
*/
int closeScene();



/**
* @brief Set Keyboard Control
* @ingroup Scene
* @param New State
* @retval 1=Success , 0=Failure
*/
int sceneSwitchKeyboardControl(int newVal);
#endif // VISUALS_H_INCLUDED
