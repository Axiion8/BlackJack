#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/deck.hpp"

TEST(deckTest, deckConstrutorTest){
    EXPECT_NO_THROW(deck d);
}

TEST(deckTest, generateDeckTest){
    deck d;
    ASSERT_EQ(d.getDeckSize(), 6*4*13);
}

TEST(deckTest, shuffleDeck){
    deck d;
    EXPECT_NO_THROW(d.shuffleDeck());
}

TEST(deckTest, shuffleDeckTest){
    deck d1;
    d1.shuffleDeck();
    deck d2;
    d2.shuffleDeck();
    EXPECT_NE(d1.drawCard(), d2.drawCard());
}

TEST(deckTest, destructorTest) {
    deck* d = new deck();
    delete d;
    d = nullptr;
    EXPECT_EQ(d,nullptr);
}

TEST(deckTest, ReturnCardTest) {
    deck d;
    card* c = new card(1, "Ace", "Clubs", true);
    d.returnCard(c);
    EXPECT_EQ(d.getDeckSize(), 313);
    //delete c;
}

TEST(deckTest, isEmpty) {
    deck testDeck;
    EXPECT_FALSE(testDeck.isEmpty()); 
    while (!testDeck.isEmpty()) {
        testDeck.drawCard();
    }
    EXPECT_TRUE(testDeck.isEmpty()); 
}

TEST(deckTest, drawsCard) {
    deck testDeck;
    card* testCard = testDeck.drawCard();
    EXPECT_NE(testCard, nullptr); 
    EXPECT_EQ(testDeck.getDeckSize(), 6 * 52 - 1);
    delete testCard;
}