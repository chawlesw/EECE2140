/*
Dog.cpp
Defines a Dog class with name, breed, age, and a constant license fee of $12.25.
Creates a Dog object, sets its data, and displays it.

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
using namespace std;

class Dog{
private:
    string name;
    string breed;
    int age;
    static const double licenseFee;

public:
    void setName(string name){ this->name = name; }
    void setBreed(string breed){ this->breed = breed; }
    void setAge(int age){ this->age = age; }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "Age: " << age << endl;
        cout << "License Fee: $" << licenseFee << endl;
    }
};

const double Dog::licenseFee = 12.25;

int main(){
    Dog d1;
    d1.setName("Sunder");
    d1.setBreed("Rottweiler");
    d1.setAge(3);
    d1.displayInfo();

    return 0;
}