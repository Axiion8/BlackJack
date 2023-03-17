#include "../header/dealer.hpp"

dealer::dealer() {
    this->dealerHand = new hand();
}

// dealer::~dealer() {
//     dealerHand.~hand();
//     dealerHandValue = 0;
// }

void dealer::dealerDraw(deck* iCard) {
    card* newCard = iCard->drawCard();
    dealerHand->drawCardHand(newCard);
}

void dealer::dealerViewHand() {
    cout << "Dealer cards: ";
    dealerHand->viewHand();
    cout << "Dealer total value is: " << dealerHand->getValueHand() << endl;
}

hand* dealer::getDealerHand(){
    return this->dealerHand;
}
