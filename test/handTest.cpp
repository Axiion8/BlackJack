#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/hand.hpp"

using ::testing::StartsWith;  

TEST(handTest, ConstructorTest){
    EXPECT_NO_THROW(hand h);
}
TEST(handTest, DestructorTest){
    hand* h = new hand();
    delete h;
    h = nullptr;
    EXPECT_FALSE(h);
}
TEST(handTest, checkBustHandTest){
    hand h;
    h.drawCardHand(new card(11, "Ace", "Diamonds", true ));
    h.drawCardHand(new card(10, "Ten", "Spades", false ));
    h.drawCardHand(new card(10, "Queen", "Spades", false ));
    EXPECT_TRUE(h.checkBustHand());
}
TEST(handTest, checkJackHandTest){
    hand h;
    h.drawCardHand(new card(11, "Ace", "Diamonds", true ));
    h.drawCardHand(new card(10, "Ten", "Spades", false ));
    EXPECT_TRUE(h.checkJackHand());
}
TEST(handTest, getValueHandTest){
    hand h;
    h.drawCardHand(new card(2, "Two", "Diamonds", false ));
    h.drawCardHand(new card(5, "Five", "Clubs", false ));
    EXPECT_EQ(h.getValueHand(), 7);
}
TEST(handTest, getValueHandTest2){
    hand h;
    h.drawCardHand(new card(11, "Ace", "Diamonds", true ));
    h.drawCardHand(new card(9, "Nine", "Spades", false ));
    h.drawCardHand(new card(10, "Ten", "Hearts", false ));
    EXPECT_EQ(h.getValueHand(), 30);
}
TEST(handTest, isAceHandTest){
    hand h;
    card* c = new card(2, "Two", "Diamonds", false);
    h.drawCardHand(c);
    EXPECT_EQ(h.isAceHand(), false);
}
TEST(handTest, isAceHandTest2){
    hand h;
    card* c = new card(1, "Ace", "Clubs", true);
    h.drawCardHand(c);
    EXPECT_EQ(h.isAceHand(), true);
}
TEST(handTest, clearHandTest){
    hand h;
    card* c = new card(1, "Ace", "Clubs", true);
    h.drawCardHand(c);
    EXPECT_EQ(h.isAceHand(), true);
}
TEST(HandTest, ClearHandTest) {
    deck d;
    d.shuffleDeck();

    hand h;
    h.drawCardHand(d.drawCard());
    h.drawCardHand(d.drawCard());
    
    h.clearHand(&d);

    EXPECT_TRUE(h.isEmpty());
}