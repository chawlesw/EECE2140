/*
TV_main.cpp
Test program that creates TV objects and demonstrates the TV class functionality.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#include "TV.h"
#include <iostream>
using namespace std;

int main(){
    TV myTV(9);
    myTV.SetStation(10);
    myTV.displayStatus();
    myTV.channelUp();
    myTV.displayStatus();

    TV myOtherTV(2);
    myOtherTV.displayStatus();

    return 0;
}
