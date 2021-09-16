//
//  Engine.hpp
//  OpenCV
//
//  Created by Jakub Dolejší on 16/09/2021.
//

#ifndef Engine_hpp
#define Engine_hpp

#include <stdio.h>
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

class Engine {
    
public:
    Engine();
    void run();

private:
    cv::VideoCapture videoCapture;
    cv::Mat cameraFrame;
    cv::Size windowSize;
    
    void captureeCameraFrame();
};

#endif /* Engine_hpp */
