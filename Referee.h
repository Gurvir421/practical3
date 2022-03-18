#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"

class Referee {
    public:
    Referee();
    char refGame(Player *player1, Player *player2);

    
    private:
    char player1Move;
    char player2Move;
    char Score;
};
#endif