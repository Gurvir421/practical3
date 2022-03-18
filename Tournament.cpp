#include <iostream>
#include <array>

#include "Tournament.h"
#include "Player.h"
Tournament::Tournament() {


}

Player * Tournament::run(std::array<Player *, 8>  competitors) {
    
    Referee soccor;
    char arrayCount;
    int level=0;
    int Win=0;
    int Lose=0;
    
    std::array<Player *, 4>  competitors_4;
    std::array<Player *, 2>  competitors_2;
    Player * winner;


    for (int j=0;j<8;j=j+2) {
        
        for (int i=0;i<5;i++) {
            
            arrayCount=soccor.refGame(competitors[j],competitors[j+1]);

            if (arrayCount=='W') {
               Win=Win+1;
            }
            else if (arrayCount=='L') {
                Lose=Lose+1;
            }
        
        }
        competitors[j]->reset();
        competitors[j+1]->reset();
        
        if (Win>=Lose){
            competitors_4[level]=competitors[j];
        }
        else {
            competitors_4[level]=competitors[j+1];
        }
        level=level+1;
        Win=0;
        Lose=0;
    }
    level=0;
    



    for (int j=0;j<4;j=j+2) {
        
        for (int i=0;i<5;i++) {
            
            arrayCount=soccor.refGame(competitors_4[j],competitors_4[j+1]);

            if (arrayCount=='W') {
               Win=Win+1;
            }
            else if (arrayCount=='L') {
                Lose=Lose+1;
            }
        
        }
        competitors_4[j]->reset();
        competitors_4[j+1]->reset();
        
        if (Win>=Lose){
            competitors_2[level]=competitors_4[j];
        }
        else {
            competitors_2[level]=competitors_4[j+1];
        }
        level=level+1;
        Win=0;
        Lose=0;
    }
    level=0;
    
    
    
    
    
    
    for (int j=0;j<2;j=j+2) {
        
        for (int i=0;i<5;i++) {
            
            arrayCount=soccor.refGame(competitors_2[j],competitors_2[j+1]);

            if (arrayCount=='W') {
               Win=Win+1;
            }
            else if (arrayCount=='L') {
                Lose=Lose+1;
            }
        
        }
        competitors_4[j]->reset();
        competitors_4[j+1]->reset();
        
        if (Win>=Lose){
            winner=competitors_2[j];
        }
        else {
            winner=competitors_2[j+1];
        }
        Win=0;
        Lose=0;
    }
    level=0;
    
    return winner;
}

