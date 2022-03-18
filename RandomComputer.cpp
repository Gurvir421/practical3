#include<iostream>
#include <cstdlib>

#include"RandomComputer.h"

RandomComputer::RandomComputer() : Computer::Computer() {
    
}

void RandomComputer::makeMove() {
    
    char array[3]={'R','P','S'};
    int number= rand()%3;
    
    move=array[number];
    
    move=array[0];
}
