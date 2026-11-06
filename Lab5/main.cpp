#include <iostream>
#include "charmander.h"
using namespace std;
int main(){
    //Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Constructor Created\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType, skills);
    //Charmander
    cout << "\nDirect speak\n";
    charlie.speak();
    //Pokemon pointer to charlie
    Pokemon * p1 = &charlie;
    cout << "\nSpeak called from Pokemon pointer\n";
    (*p1).speak();
    //Charmander pointer to charlie
    Charmander * c1 = &charlie;
    cout << "\nSpeak called from Charmander pointer\n";
    (*c1).speak();
    //Charmander
    cout << "\nPrint Stats\n";
    charlie.printStats();
}