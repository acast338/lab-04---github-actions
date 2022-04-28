#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(Constructor, Zeros){
    Rectangle rect1(0,0);  // initialize object to width & height = 0
    EXPECT_EQ(0, rect1.get_width());
    EXPECT_EQ(0, rect1.get_height());
}

int main(int ac, char *av[]){
  ::testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
