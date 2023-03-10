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

TEST(deckTest3, generateDeck){// Check that the size of the deck is correct
    deck d;
    ASSERT_EQ(d.deckV.size(), 6*4*13);
}

TEST(deckTest4, shuffleDeck){// Shuffle the first deck and the second deck
    deck d1, d2;
    d1.shuffleDeck();
    d2.shuffleDeck();

    ASSERT_NE(d1.deckV, d2.deckV);// Check that the two decks are different
}

TEST(deckTest5, deckDestructor) {
    deck* d = new deck();
    ASSERT_FALSE(d->deckV.empty());

    // Call the destructor
    delete d;
}

TEST(deckTest6, drawsCard) {
    deck testDeck;
    card* testCard = testDeck.drawCard();
    EXPECT_NE(testCard, nullptr); // drawCard() should return a non-null card pointer if deck is not empty
    EXPECT_EQ(testDeck.deckV.size(), 6 * 52 - 1); // deckV should have one less card after drawing a card
}

TEST(DeckTest, isEmpty) {
    deck testDeck;
    EXPECT_FALSE(testDeck.isEmpty()); // deck should not be empty after being generated
    while (!testDeck.isEmpty()) {
        testDeck.drawCard();
    }
    EXPECT_TRUE(testDeck.isEmpty()); // deck should be empty after drawing all cards
}