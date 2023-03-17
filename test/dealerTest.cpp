#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../header/dealer.hpp"

TEST(dealerTest, dealerConstructorTest){
    dealer d; 
    EXPECT_EQ(d.getDealerHandValue(), 0);
}

// TEST(dealerTest, dealerDestructorTest){
//     dealer d;
//     d.dealerDraw(new card(11, "Ace", "Diamonds", true ));
//     d.dealerDraw(new card(10, "Ten", "Spades", false ));
//     EXPECT_EQ(d.getDealerHandValue(), 1);
// }