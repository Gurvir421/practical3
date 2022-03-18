#include <iostream>

#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include"Crescendo.h"


using namespace std;
Referee::Referee() {
    
}

char Referee::refGame(Player *player1, Player *player2) {
    
    player1->makeMove();
    player2->makeMove();
    
    char player1Move=player1->getMove();
    char player2Move=player2->getMove();
    
    //cout << player1Move << player2Move << endl;
    
    if (player1Move==player2Move) {
        Score='T';
    }
    else if (player1Move=='R' && player2Move=='P') {
        Score='L';
    }
    else if (player1Move=='R' && player2Move=='S') {
        Score='W';
    }
    else if (player1Move=='P' && player2Move=='R') {
        Score='W';
    }
    else if (player1Move=='P' && player2Move=='S') {
        Score='L';
    }
    else if (player1Move=='S' && player2Move=='P') {
        Score='W';
    }
    else if (player1Move=='S' && player2Move=='R') {
        Score='L';
    }
    else {
        Score='F';
    }
    //player2->reset();
    return Score;
    

}