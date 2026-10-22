#include "game.h"
#include <random>

//default constructor
Game::Game(){
}
//mutators
void Game::generatePlayers(int n){
    for(int i = 0; i < n; i++){
        players.push_back(new RPG());

        string new_name = "NPC " + to_string(i+1);
        players[i]->setName(new_name);
        live_players.insert(i);
    }
}
int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() - 1);
    int randomIndex = dist(gen);
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);
    int selectedIndex = *it;
    return selectedIndex;
}