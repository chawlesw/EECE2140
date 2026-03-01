/*
Cat.cpp
Implements the Cat class methods defined in Cat.h, including accessors, 
input validation, and cat behavior and display functionality.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#include "Cat.h"
#include <iostream>
using namespace std;

int Cat::getAge() const{
    return itsAge;
};

void Cat::setAge(int age){
    if (age >= 0)
        itsAge = age;
    else
        cout << "Invalid Age" << endl;
}

float Cat::getWeight() const{
    return itsWeight;
}

void Cat::setWeight(float weight){
    if (weight >= 0)
        itsWeight = weight;
    else   
        cout << "Error: Invalid Weight" << endl;
}

string Cat::getName() const{
    return itsName;
}
void Cat::setName(string name){
    itsName = name;
}

void Cat::meow(){
    cout << itsName << ": meow!" << endl;
}
void Cat::displayInfo(){
    cout << "Age: " << itsAge << endl;
    cout << "Weight: " << itsWeight << endl;
    cout << "Name: " << itsName << endl;
}
