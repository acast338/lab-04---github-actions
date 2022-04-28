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

TEST(Constructor, Negative){
    // testing parameterized constructor
    Rectangle rect4(-1, -2);
    EXPECT_EQ(-1, rect4.get_width());
    EXPECT_EQ(-2, rect4.get_height());
}

TEST(Area, Zeros){
    Rectangle rect5(0, 0);
    EXPECT_EQ(0, rect5.area());
}

TEST(Area, Positive){
    Rectangle rect6(3, 4);
    EXPECT_EQ(12, rect6.area());
}

TEST(Area, Negative) {
    Rectangle rect1(-1, -5);
    EXPECT_EQ(5, rect1.area());
}

TEST(Area, LargeNumbers) {
    Rectangle rect2(1069, 4200);
    EXPECT_EQ(4489800, rect2.area()); 
}

TEST(Perimeter, Zeroes) {
    Rectangle rect3(0, 0);
    EXPECT_EQ(0, rect3.perimeter());
} 

TEST(Perimeter, LargeNumbers) {
    Rectangle rect4(1069, 4200);
    EXPECT_EQ(10538, rect4.perimeter());
}
TEST(Perimeter, Negative) {
    Rectangle rect5(-7, -9);
    EXPECT_EQ(-32, rect5.perimeter());
}

TEST(Perimeter, Positive) {
    Rectangle rect6(43, 5);
    EXPECT_EQ (96, rect6.perimeter());
}

int main(int ac, char *av[]){
  ::testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
