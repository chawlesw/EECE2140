/*
Cat.h
Declares the Cat class with private age, weight, and name members, constructors, 
getter/setter methods, and utility methods for display and interaction.

By: Charles Wan
EECE 2140 -  Professor Nafa
27 February, 2026
*/

#ifndef CAT_H
#define CAT_H
#include <string>

class Cat{
private:
    int itsAge;
    float itsWeight;
    std::string itsName;

public:
    Cat() : itsAge(0), itsWeight(0), itsName("NoName"){}

    Cat(int age, float weight, std::string name)
        : itsAge(age), itsWeight(weight), itsName(name){}

    int getAge() const;
    void setAge(int age);
    
    float getWeight() const;
    void setWeight(float weight);

    std::string getName() const;
    void setName(std::string name);

    void birthday(); // Increments age by 1
    void display(); // Displays age

    void meow();
    void displayInfo();
};

// Exercise 7
// 1. Design problem: When there is no access specifier for a member in C++, it defaults to private.
//    So you would not be able to use GetAge() outside of the class.
// 2. Because everything in the class is private, main() cannot actually do anything with the Cat class.
// 3. Class Declaration fixed above.
// 4. Additional methods added above.

#endif