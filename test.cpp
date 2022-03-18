#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //srand(time(0));
    //int the= rand()%3;
        
        
    //cout << the << endl;

    for (int j=0;j<8;j=j+2) {
        cout <<j<<endl;
    }
    

    return 0;
}

//std::cout <<soccor.refGame(competitors[0],competitors[1]) <<std::endl;
    //std::cout <<soccor.refGame(competitors[0],competitors[1]) <<std::endl;
    //std::cout <<soccor.refGame(competitors[0],competitors[1]) <<std::endl;
    //std::cout <<soccor.refGame(competitors[0],competitors[1]) <<std::endl;
    //competitors[0]->reset();
    //competitors[1]->reset();
    //std::cout <<soccor.refGame(competitors[0],competitors[1]) <<std::endl;



for (int j=0;j<8;j=j+2) {
        
        for (int i=0;i<5;i++) {
            
        arrayCount[i]=soccor.refGame(competitors[j],competitors[j+1]);
        
        if (arrayCount[i]=='W') {
            Win=Win+1;
        }
        else if (arrayCount[i]=='L') {
            Lose=Lose+1;
        }
        
        }
        
    if (Win>=Lose){
            competitors_two[level]=competitors[j];
        }
    else {
            competitors_two[level]=competitors[j+1];
        }
    level=level+1;
        
    competitors_two[j]->reset();
    competitors_two[j+1]->reset();
    Win=0;
    Lose=0;
    }
    level=0;
    return competitors[0];