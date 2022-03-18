#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <array>
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

class Tournament {
    public:
    Tournament();
    Player * run(std::array<Player *, 8>  competitors);
    
};
#endif