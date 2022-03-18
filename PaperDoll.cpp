#include<iostream>
#include"PaperDoll.h"

PaperDoll::PaperDoll() : Computer::Computer() {
    count=0;
}

void PaperDoll::makeMove() {
    char array[3]={'P','S','S'};
    move=array[count];
    count=count+1;
    if (count==3) {
        count=0;
    }
}

