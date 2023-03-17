#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/player.hpp"

using ::testing::StartsWith;  

TEST(playerTest, playerConstructorName){
    player Player1("Pokemon"); 
    string playerName = Player1.getName();
    EXPECT_THAT(playerName, StartsWith("Pokemon"));
}

TEST(playerTest, playerConstructorMoney){
    player Player1; 
    int playerMoney = Player1.viewMoney();
    EXPECT_EQ(playerMoney, 100);
}

TEST(playerTest, ConstructorBet){
    player Player1;
    Player1.placeBet(20);
    int playerBet = Player1.viewBet();
    EXPECT_EQ(playerBet, 20);
}

TEST(playerTest, playerHit){
    deck* testDeck = new deck();
    player* testPlayer = new player();
    testPlayer->hit(testDeck);
    EXPECT_EQ(testPlayer->getCurrentHand()->getHandSize(), 1);
}

TEST(playerTest, wonBetTest){
    player Player1;
    Player1.placeBet(20);
    Player1.wonBet();
    int playerBet = Player1.viewMoney();
    EXPECT_EQ(playerBet, 120);
}

TEST(PlayerTest, DoubleDownTest) {
  deck* testDeck = new deck();
  player* testPlayer = new player();
  testPlayer->placeBet(10);
  testPlayer->hit(testDeck);
  testPlayer->hit(testDeck);
  testPlayer->doubleDown(testDeck);
  testPlayer->wonBet();
  EXPECT_EQ(testPlayer->viewBet(), 20);
  EXPECT_EQ(testPlayer->viewMoney(), 120);
  EXPECT_EQ(testPlayer->getCurrentHand()->getHandSize(), 3);
  delete testDeck;
  delete testPlayer;
}



