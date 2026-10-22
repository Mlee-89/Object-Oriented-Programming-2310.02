#include <iostream>
#include "rpg.h"
#include <string>
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current stats\n %s \n", p1.getName().c_str(), p1.printStats().c_str());
    printf("%s Current stats\n %s\n", p2.getName().c_str(), p2.printStats().c_str());


    p2.setHitsTaken(1);
    cout << "\nP2 hits taken: " << p2.getHitsTaken() << endl;

    cout << "0 means dead, 1 means alive\n";
    cout << "P1: " << p1.isAlive() << endl;
    cout << "P2: " << p2.isAlive() << endl;

    return 0;
}