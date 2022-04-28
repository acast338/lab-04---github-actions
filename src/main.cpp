#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1;
    cout << "Rectangle area 1: " << rect1.area() << endl;
    Rectangle rect2(3, 4);
    cout << "Rectangle area 2: " << rect2.area() << endl;
    return 0;
}
