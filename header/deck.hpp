#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"
#include <vector>

class deck{
    private:
        vector<card> deck;
    public:
        deck(); //generate the deck
        void generateDeck();
        void shuffleDeck();
        card drawCardDeck();
};

#endif