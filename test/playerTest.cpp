#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/player.hpp"

using ::testing::StartsWith;  

TEST(playerTest, playerConstructorName){
    player Player1; 
    string playerName = Player1.getName();
    EXPECT_THAT(playerName, StartsWith("Player 1"));
}
TEST(playerTest, playerConstructorMoney){
    player Player1; 
    int playerMoney = Player1.viewMoney();
    EXPECT_EQ(playerMoney, 100);
}
TEST(playerTest, playerConstructorHand){
    player Player1; 
    int playerHand = Player1.numHands();
    EXPECT_THAT(playerHand, 1);
}
TEST(playerTest, playerHit){
}
