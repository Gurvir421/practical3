#include<iostream>
#include"Crescendo.h"

Crescendo::Crescendo() : Computer::Computer() {
    count=0;
}

void Crescendo::makeMove() {
    char array[3]={'P','S','R'};
    move=array[count];
    count=count+1;
    if (count==3) {
        count=0;
    }
}

