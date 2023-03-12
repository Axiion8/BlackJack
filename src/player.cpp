#include "../header/player.hpp"
#include <iostream>

using namespace std;

player::player(){
    this->name = "Player 1";
    this->money = 100;
}

player::player(string n){
    this->name = n;
    this->money = 100;
}

player::~player(){
    //deletes all the hands in the hand vector
    for (auto& hand : handV) {
        delete hand;
        hand = nullptr;
    }
}

string player::getName(){
    return this->name;
}

int player::viewMoney(){
    return this->money;
}

int player::numHands(){
    return handV.size();
}

void player::wonBet(){

}

void player::hit(){
    
}

void player::stand(){

}

void player::doubleDown(){

}

void player::split(){

}

void player::surrender(){

}