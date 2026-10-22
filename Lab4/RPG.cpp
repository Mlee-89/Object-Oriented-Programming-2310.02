#include "rpg.h"
#include <random>

//default constructor
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

//overloaded constructor
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

//accessors
string RPG::getName() const{
    return name;
}
int RPG::getHitsTaken() const{
    return hits_taken;
}
float RPG::getLuck() const{
    return luck;
}
float RPG::getExp() const{
    return exp;
}
int RPG::getLevel() const{
    return level;
}

//mutators
void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}
bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}
void RPG::setName(string new_name){
    this->name = new_name;
}
void RPG::updateExpLevel(){
    this->exp += 50.0;
    if(this->exp >= 100.0){
        this->level += 1;
        this->exp = 0.0;
        this->luck += 0.1;
    }
}
void RPG::attack(RPG * opponent){
    static random_device rd;
    static mt19937 gen(rd()); //seed with random
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);

    if(random_num < (HIT_FACTOR * this->luck)){
        opponent->setHitsTaken(opponent->getHitsTaken() + 1);
    }
}
void RPG::printStats() const{
    printf("Name: %s     Hits Taken: %i     Luck: %f     Exp: %f     Level: %i     Status: %s\n", this->name.c_str(), this->hits_taken, this->luck, this->exp, this->level, this->isAlive() ? "Alive" : "Dead");
}
RPG::~RPG(){}