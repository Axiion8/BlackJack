#include "../header/dealer.hpp"

dealer::dealer() {
    dealerHandValue = 0;
}

dealer::~dealer() {
    dealerHand.~hand();
    dealerHandValue = 0;
}

void dealer::dealerDraw(card *iCard) {
    dealerHand.drawCardHand(iCard);
}