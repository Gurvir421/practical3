#include<iostream>
#include"Avalanche.h"

Avalanche::Avalanche() : Computer::Computer() {
    
}

void Avalanche::makeMove() {
    char array[3]={'R','P','S'};
    move=array[0];
}