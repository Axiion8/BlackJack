#ifndef DEALER_HPP
#define DEALER_HPP

#include "hand.hpp"
#include "card.hpp"
#include <string>
#include <vector>

class dealer {
    private:
    hand dealerHand;
    int dealerHandValue;

    public:
    dealer();
    ~dealer();
    void dealerDraw(card* iCard);

};

#endif