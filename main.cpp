#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

using namespace std;
#include "Player.h"
//#include"Human.h"
#include "Computer.h"
#include "Referee.h"
#include"RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include"Crescendo.h"
#include"FistfullODollars.h"
#include"PaperDoll.h"
#include "Tournament.h"


int main(void) {
   
   Avalanche a;
   Bureaucrat b;
   Bureaucrat c;
   Toolbox d;
   Toolbox e;
   Crescendo f;
   Crescendo g;
   FistfullODollars h;
   
   
   
    //PaperDoll n;
    //FistfullODollars m;
    
    
    Player *player1=&a;
    Player *player2=&b;
    Player *player3=&c;
    Player *player4=&d;
    Player *player5=&e;
    Player *player6=&f;
    Player *player7=&g;
    Player *player8=&h;
    
    
    
    array<Player*,8> competitors {player1,player2,player3,player4,player5,player6,player7,player8};
    //Human player1;
    //Computer player2;

    //Referee soccor;
    //cout <<soccor.refGame(player1,player2) <<endl;
    //cout <<soccor.refGame(player1,player2) <<endl;
    
    Tournament car;
    
    Player* the= car.run(competitors);
    return 0;
}