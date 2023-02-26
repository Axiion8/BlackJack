#include "../header/card.hpp"

card::card(){
    this->cardValue = 0;
    this->cardName = "default";
    this->cardSuit = "default";
}

card::card(int inValue, string inName, string inSuit){
    this->cardValue = inValue;
    this->cardName = inName;
    this->cardSuit = inSuit;
}

void card::setValue(int input){
    this->cardValue = input;
}

void card::setName(string input){
    this->cardName = input;
}

void card::setSuit(string input){
    this->cardSuit = input;
}

int card::getValue(){
    return this->cardValue;
}

string card::getName(){
    return this->cardName;
}

string card::getSuit(){
    return this->cardSuit;
}