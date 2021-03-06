#ifndef STITCHER_H_INCLUDED
#define STITCHER_H_INCLUDED


#include <opencv2/core/core.hpp>

int stitchAffineMatch(
                       const char * filenameOutput ,
                       unsigned int border,
                       cv::Mat & left ,
                       cv::Mat & right ,
                       cv::Mat & warp_mat
                     );

int stitchHomographyMatch(
                          const char * filenameOutput ,
                          unsigned int border,
                          cv::Mat & left ,
                          cv::Mat & right ,
                          cv::Mat & warp_mat
                         );

#endif // STITCHER_H_INCLUDED
