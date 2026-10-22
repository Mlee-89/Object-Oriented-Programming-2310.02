#ifndef game_h
#define game_h
#include "rpg.h"
#include <string>
#include <vector>
#include <set>
using namespace std;

class Game{
    public:
    //constructor
        Game();
    //mutators
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserindex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
    //destructor
        ~Game();
    
    private:
        vector<RPG*> players;
        set<int> live_players;
};
#endif