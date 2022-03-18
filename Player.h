#ifndef PLAYER_H
#define PLAYER_H

class Player {
    public:
    
    Player();
    
    virtual void makeMove()=0;
    virtual char getMove()=0;
    virtual void reset()=0;
    char move;
    int count;
    
    
};
#endif