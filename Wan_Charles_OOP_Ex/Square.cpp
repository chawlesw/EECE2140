/*
Square.cpp
Implements the Square class methods defined in Square.h, including 
accessors, input validation, and geometric calculations.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#include "Square.h"
#include <iostream>
using namespace std;

int Square::getSide() const{
    return side;
}
void Square::setSide(int s){
    if (s >= 0)
        side = s;
    else
        cout << "Error: Invalid Side Length" << endl;
}
float Square::getArea() const{
    float area = side * side;
    return area;
}
int Square::getPerimeter() const{
    int perimeter = side *4;
    return perimeter;
}