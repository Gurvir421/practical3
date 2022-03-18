#include<iostream>
#include"FistfullODollars.h"

FistfullODollars::FistfullODollars() : Computer::Computer() {
    count=0;
}

void FistfullODollars::makeMove() {
    char array[3]={'R','P','P'};
    move=array[count];
    count=count+1;
    if (count==3) {
        count=0;
    }
}

