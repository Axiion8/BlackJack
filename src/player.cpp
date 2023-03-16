#include "../header/player.hpp"
#include <iostream>

using namespace std;

player::player(){
    this->name = "Player 1";
    this->money = 100;
    this->currentHand = new hand();
}

player::player(string n){
    this->name = n;
    this->money = 100;
    this->currentHand = new hand();
}

/*player::~player(){
    currentHand = nullptr;
}*/

string player::getName(){
    return this->name;
}

int player::viewMoney(){
    return this->money;
}

/*int player::numHands(){
    return handV.size();
}*/

void player::wonBet(){
    this->money = this->bet*2;
}

void player::placeBet(int amount){
    this->bet = 0;
    this->bet = amount;
    this->money -= amount;
}

void player::hit(deck* input){
    card* newCard = input->drawCard();
    currentHand->drawCardHand(newCard);
}

void player::stand(){
//do nothing
}

void player::doubleDown(deck* input){
this->placeBet(bet * 2);
card* newCard = input->drawCard();
currentHand->drawCardHand(newCard);
// currentHand->drawCardHand(drawCard());
//stand 
}

/*void player::split(){

}*/

/*void player::surrender(){
// int surrenderBet = this->bet;
// this->bet = surrenderBet / 2;
//next round
}*/