//
//  Engine.cpp
//  OpenCV
//
//  Created by Jakub Dolejší on 16/09/2021.
//

#include "Engine.hpp"

Engine::Engine() {
    videoCapture.open(0);
}

void Engine::run() {
    for (;;){
        Engine::captureeCameraFrame();
        cv::imshow("Camera Frame", cameraFrame);
        char c = cv::waitKey(27);
        if (c == 27) {
            break;
        }
    }
}

void Engine::captureeCameraFrame() {
    videoCapture >> cameraFrame;
}
