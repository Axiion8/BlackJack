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
<<<<<<< HEAD
        vector <hand*> handV;
=======
        int bet;
        hand* currentHand;
>>>>>>> 4f4c61169b5626b6584df6b1c1c1068ad8724a3d
    public:
        player();
        player(string);
        //~player();

        string getName();
        int viewMoney();
        int numHands();
        void wonBet();
        void placeBet(int);

        void hit(deck*);
        void stand();
<<<<<<< HEAD
        void doubleDown();
        void surrender();
        void helperHit(hand*);
       
=======
        void doubleDown(deck*);
        //void split();
        //void surrender();
>>>>>>> 4f4c61169b5626b6584df6b1c1c1068ad8724a3d

        void output();
};

#endif