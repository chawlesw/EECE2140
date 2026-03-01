/*
TV.h
Declares the TV class with a private station member, constructors, getter/setter 
methods, and channel navigation functionality.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#ifndef TV_H
#define TV_H

class TV
{
private :
    int itsStation;
public :
    TV() : itsStation(1){}
    TV(int station)
        : itsStation(station){}

    void SetStation (int station);
    int GetStation () const ;
    void displayStatus();
    void channelUp();
    void channelDown();
};

/*
Exercise 8
1. Identify all THREE bugs:
   Bug 1: Accessing the private member itsStation directly from outside the class.
   Bug 2: Using TV.SetStation(10) instead of myTV.SetStation(10) — calling the class instead of the object instance.
   Bug 3: TV myOtherTV(2) calls a constructor that does not exist — no parameterized constructor is defined.

2. Explain why each is an error:
   Bug 1: Private members can only be accessed from within the class, not from outside it.
   Bug 2: Methods must be called on an object instance, not on the class name itself.
   Bug 3: You cannot call a constructor with arguments if no parameterized constructor has been defined.

3. Corrected code above.
4. Code tested.

*/

#endif