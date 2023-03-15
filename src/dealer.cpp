#include "../header/dealer.hpp"

dealer::dealer() {
    dealerHand.handValue = 0;
    dealerHand.aceHand = false;
    dealerHand.numAces = 0;
    dealerHand.bet = 0;
}
void dealer::dealerDraw() {
    dealerHand.drawCardHand();
}