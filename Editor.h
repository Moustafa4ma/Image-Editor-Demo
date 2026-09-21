#pragma once

#include<iostream>
#include"External Libraries\stb_image_write.h"
#include"External Libraries\stb_image.h"
#include"Image.h"

class Editor{
    enum status{modified , upToDate};
    Image currentImage;
    std::string currentPath;

public:
    void open();
    void save();
    void saveAS();

    void display();

    void greyScale();
};