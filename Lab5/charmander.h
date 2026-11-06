#ifndef CHARMANDER_H
#define CHARMANDER_H
#include <string>
#include <vector>
#include "pokemon.h"
using namespace std;

class Charmander : public Pokemon{
    public:
        //constructors
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);
        //mutators
        void speak()/*override*/;
        void printStats()/*override*/;
    private:
        vector<string> skills;
        /* name, hp, att, def */
};
#endif