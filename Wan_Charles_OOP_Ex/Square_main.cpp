/*
Square_main.cpp
Test program that creates Square objects and demonstrates
the Square class functionality.

By: Charles Wan
EECE 2140 - Professor Nafa
27 February, 2026
*/

#include "Square.h"
#include <iostream>
using namespace std;

int main(){
    Square s1(5);
    cout << "Side: " << s1.getSide() << endl;
    cout << "Area: " << s1.getArea() << endl;
    cout << "Perimeter: " << s1.getPerimeter() << endl;

    // Test invalid side length
    s1.setSide(-3);

    return 0;
}