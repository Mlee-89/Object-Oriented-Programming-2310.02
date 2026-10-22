#include <iostream>
#include "rpg.h"
#include "game.h"
#include <string>
using namespace std;

int main(){
    Game game;
    int num_players = 10;
    cout << "generating players" << endl;
    game.generatePlayers(num_players);
    cout << "starting game loop" << endl;
    game.gameLoop();
    cout << "printing final results" << endl;
    game.printFinalResults();
    cout << "game over" << endl;
    return 0;
}