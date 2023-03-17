#include "../header/dealer.hpp"

dealer::dealer() {
    this->dealerHandValue = 0;
    this->aceHand = false;
    this->numAces = 0;
}

dealer::~dealer() {
    dealerHand.~hand();
    dealerHandValue = 0;
}

int dealer::getDealerHandValue(){
    return this->dealerHandValue;
}

void dealer::dealerDraw(card *iCard) {
    dealerHand.drawCardHand(iCard);
}

void dealerViewHand() {
    unsigned int i;
    for (i = 0; i < dealerHand.handV; ++i) {
        cout << "Your cards in " << dealerHand.handV->viewHand();
        cout << "Your total value is: " << dealerHand.handV->getValueHand() << endl;
    }
}