#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/card.hpp"

TEST(cardTest1, testConstructor1){
    EXPECT_NO_THROW(card *cardPTR = new card());
}

TEST(cardTest2, testConstructor2){
    EXPECT_NO_THROW(card *cardPTR = new card(3214, "Ace", "Spade", false));
}

TEST(cardTest3, test_setValue_and_getValue){
    card *cardPTR = new card();
    cardPTR->setValue(123);
    EXPECT_EQ(cardPTR->getValue(), 123);
}

TEST(cardTest4, test_setName_and_getName){
    card *cardPTR = new card();
    cardPTR->setName("Ace");
    EXPECT_EQ(cardPTR->getName(), "Ace");
}

TEST(cardTest5, test_setSuit_and_getSuit){
    card *cardPTR = new card();
    cardPTR->setSuit("Spades");
    EXPECT_EQ(cardPTR->getSuit(), "Spades");
}