#ifndef CARD_HPP
#define CARD_HPP

#include <string>

using namespace std;

class card{
    private:
        unsigned int cardValue;
        string cardName;
        string cardSuit;
    public:
        card();
        card(int,string,string);
        void setValue(int);
        void setName(string);
        void setSuit(string);
        int getValue();
        string getName();
        string getSuit();
};

#endif