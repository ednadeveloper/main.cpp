#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480),channels(3),depth(8) {
    buffer = new char[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg"  || fileExt=="jpeg" || fileExt=="png") {
        // load image file
        // decompress into buffer
        //more code to handle pixel depth and channels
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

bool BitmapImage::save(std::string name) {
    std::string fileExt=name.substr(name.find_last_of(".")+1);
    return false;
}

void BitmapImage::resize(int width,int height) {
    if(width>0)

    this->width=width;
   if(height>0)
    this->height=height;
    //resize the bipmap

}
