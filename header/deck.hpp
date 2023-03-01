#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp" //for deck()
#include <vector>
#include <string>
#include <algorithm> //for shuffleDeck()

class deck{
    public:
        vector<card> deck;
        deck(); //generate the deck
        void generateDeck();//deck() helper function
        void shuffleDeck();
};

#endif