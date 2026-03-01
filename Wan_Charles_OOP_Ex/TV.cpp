/*
TV.cpp
Implements the TV class methods defined in TV.h, including input 
validation, station display, and channel up/down functionality.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#include "TV.h"
#include <iostream>
using namespace std;

void TV::SetStation (int station){
    if (station >= 1 && station <= 999)
        itsStation = station;
    else
        cout << "Error: Invalid station" << endl;
}
int TV::GetStation () const {
    return itsStation;
}
void TV::displayStatus(){
    cout << "TV is on station " << itsStation << endl;
}
void TV::channelUp(){
    if (itsStation >= 1 && itsStation <= 998)
        itsStation += 1;
    else
        cout << "Error: Maximum Station" << endl;    
}
void TV::channelDown(){
    if (itsStation >= 2 && itsStation <= 999)
        itsStation -= 1;
    else
        cout << "Error: Minimum Station" << endl;    
}