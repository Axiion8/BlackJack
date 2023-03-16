#include "../header/player.hpp"
#include <iostream>

using namespace std;

player::player(){
    this->name = "Player 1";
    this->money = 100;
    handV.push_back(new hand());
}

player::player(string n){
    this->name = n;
    this->money = 100;
    handV.push_back(new hand());
}

player::~player(){
    //deletes all the hands in the hand vector
    for (auto& hand : handV) {
        delete hand;
        hand = nullptr;
    }

    //currentHand = nullptr;
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
    //for (auto& hand: handV){}
}

void player::hit(deck* input){
    
}

void player::stand(){
//do nothing
}

void player::doubleDown(){
// this->bet = this->bet * 2;
// currentHand->drawCardHand(drawCard());
//stand 
}

void player::surrender(){
// int surrenderBet = this->bet;
// this->bet = surrenderBet / 2;
//next round
}