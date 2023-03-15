#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "card.hpp"
#include "deck.hpp"
#include "hand.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class player{
    private:
        string name;
        int money;
        vector<hand*> handV;
        hand* currentHand;
    public:
        player();
        player(string);
        ~player();

        string getName();
        int viewMoney();
        int numHands();
        void wonBet();

        void hit(deck*);
        void stand();
        void doubleDown();
        void split();
        void surrender();
       

};

#endif