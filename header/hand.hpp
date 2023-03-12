#ifndef HAND_HPP
#define HAND_HPP

#include "deck.hpp"
#include <vector>
#include <string>

class hand{
    public:
        vector<card*>handV;
        int handValue;
        bool aceHand;
        int numAces;
        int bet;

        hand();
        ~hand();

        bool checkBustHand();
        bool checkJackHand();

        void setBet(int);
        int wonBet();

        int getValueHand();
        void drawCardHand(card*);
        void viewHand();
        void clearHand(deck*);
        bool isEmpty();
        bool isAceHand();
};

#endif