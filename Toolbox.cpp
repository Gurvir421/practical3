#include<iostream>
#include"Toolbox.h"

Toolbox::Toolbox() : Computer::Computer() {
    
}

void Toolbox::makeMove() {
    char array[3]={'R','P','S'};
    move=array[2];
}