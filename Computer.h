#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer: public Player{
    public:
    
    Computer();
    virtual void makeMove()=0;
    char getMove();
    virtual void reset();
    

};
#endif
