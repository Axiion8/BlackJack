#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/deck.hpp"

TEST(deckTest1, deckConstructor){
    EXPECT_NO_THROW(deck d);
}

TEST(deckTest2, shuffleDeck){
    deck d;
    EXPECT_NO_THROW(d.shuffleDeck());
}

TEST(DeckTest3, GenerateDeckTest){// Check that the size of the deck is correct
    deck d;
    ASSERT_EQ(d.deckV.size(), 6*4*13);
}

TEST(DeckTest, ShuffleDeckTest){// Shuffle the first deck and the second deck
    deck d1, d2;
    d1.shuffleDeck();
    d2.shuffleDeck();

    ASSERT_NE(d1.deckV, d2.deckV);// Check that the two decks are different
}