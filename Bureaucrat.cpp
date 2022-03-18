#include<iostream>
#include"Bureaucrat.h"

Bureaucrat::Bureaucrat() : Computer::Computer() {
    
}

void Bureaucrat::makeMove() {
    char array[3]={'R','P','S'};
    move=array[1];
}