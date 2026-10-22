#include <iostream>
#include "rpg.h"
#include "game.h"
#include <string>
using namespace std;

int main(){
    Game game;
    int num_players = 10;
    game.generatePlayers(num_players);
    game.gameLoop();
    game.printFinalResults();
    return 0;
}