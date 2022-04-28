#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(Constructor, Default){
    // testing default constructor
    Rectangle rect1;  // initizalize object -> width & height = 0
    EXPECT_EQ(0, rect1.get_width());
    EXPECT_EQ(0, rect1.get_height());
}

TEST(Constructor, Zeros){
    // testing parameterized constructor
    Rectangle rect2(0,0);  // initialize object -> width & height = 0
    EXPECT_EQ(0, rect2.get_width());
    EXPECT_EQ(0, rect2.get_height());
}

TEST(Constructor, LargeNumbers){
    // testing paramterizaed constructor
    Rectangle rect3(100, 500);
    EXPECT_EQ(100, rect3.get_width());
    EXPECT_EQ(500, rect3.get_height());
}

int main(int ac, char *av[]){
  ::testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
