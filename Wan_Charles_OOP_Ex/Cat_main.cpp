/*
Cat_main.cpp
Test program that creates Cat objects and demonstrates
the Cat class functionality.

By: Charles Wan
EECE 2140 - Professor Nafa
27 February, 2026
*/

#include "Cat.h"
#include <iostream>
using namespace std;

int main(){
    Cat c1(3, 10.5, "Whiskers");
    c1.displayInfo();
    c1.meow();

    // Test invalid age
    c1.setAge(-1);

    return 0;
}