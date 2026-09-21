#include<iostream>
#include"Editor.h"


class APP{
    Editor editor;

    void mainMenu();
    void filterMenu();

public:
    void run(){
        mainMenu();
    };
};