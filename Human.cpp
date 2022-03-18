#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>


#include"Human.h"
using namespace std;

Human::Human() {
    
}

void Human::makeMove() {
    char input;
    
    std::cout << "Enter: ";
    std::cin >> input;
    
    Move=input;
}

char Human::getMove() {
    
    return Move;
}



//player
//- makemove()
//- getmove()


//Computer
//- makemove()
//- getmove()

//Refeere
//- calculate
//-

//decoupling
//data hiding
//user should not need any implemnetation details