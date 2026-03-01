/*
Square.h
Declares the Square class with a private side member, constructor, 
getter/setter methods, and area/perimeter calculations.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#ifndef SQUARE_H
#define SQUARE_H

class Square
{
private:
    int side;

public:
Square(int s)
    : side(s) {}

int getSide() const;
void setSide(int s);

float getArea() const;
int getPerimeter() const;

};

// Excercise 6
// 1. Syntax Error: Missing semicolon after class declaration
// 2. This causes a compilation error as syntax is incorrect
// 3. Code fixed above
// 4. Code improved above

#endif
