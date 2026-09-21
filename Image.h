#pragma once

#include<iostream>

class Image{
    enum ImageType{Grayscale = 2 , RGB = 3};
    int width;
    int heigth;
    unsigned char *pixels;
    
};