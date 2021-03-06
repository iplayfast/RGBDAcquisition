/** @file ogl_fixed_pipeline_renderer.h
 *  @brief  This is the old way ( OpenGL2 ) to render using a fixed pipeline..
 *  @author Ammar Qammaz (AmmarkoV)
 */

#ifndef OGL_FIXED_PIPELINE_RENDERER_H_INCLUDED
#define OGL_FIXED_PIPELINE_RENDERER_H_INCLUDED

/**
* @brief This call renders and visualizes (using spheres) an array of bones
* @ingroup Rendering
* @param Array of floats that contain the positions of the bones ( and spheres ) that will be drawn
* @param Array of unsigned ints that contain the relation map between bones ( i.e. which is the parent of each one )
         if an array element's parent is itself it is the root node..!
* @param The number of bones
*/
void doOGLBoneDrawCalllist( float * pos , unsigned int * parentNode , unsigned int boneSizes);


/**
* @brief This call renders a mesh using the old fixed OpenGL pipeline
* @ingroup Rendering

* @param Vertice data
* @param Number of Vertices

* @param Normal data
* @param Number of Normals

* @param Texture Coordinate data
* @param Number of Texture Coordinates

* @param Color data
* @param Number of Colors

* @param Indexing data for vertices
* @param Number of Indices
*/
void doOGLGenericDrawCalllist(
                              float * vertices ,       unsigned int numberOfVertices ,
                              float * normals ,         unsigned int numberOfNormals ,
                              float * textureCoords ,  unsigned int numberOfTextureCoords ,
                              float * colors ,         unsigned int numberOfColors ,
                              unsigned int * indices , unsigned int numberOfIndices
                             );

#endif // OGL_FIXED_PIPELINE_RENDERER_H_INCLUDED
