#include<iostream>
#include<opencv2/opencv.hpp>
#include"Histogram.h"
#include"ImageValue.h"

using namespace cv;

int main(){
/***input image***/
    Mat image = imread("../lena.png");
    if(!image.data){
        printf("can not open image file.");
        return -1;
    }

    Histogram hist(image);
    ImageValue value(image);
    hist.Draw();
    value.Draw();
    //imshow("Image",image);
    waitKey(0);

    destroyAllWindows();
    return 0;
}