/*
main.cpp
Test program that creates Employee objects and demonstrates the 
Employee class functionality.

By: Charles Wan
EECE 2140 - Professor Nafa
27 February, 2026
*/

#include "Employee.h"
#include <iostream>
using namespace std;

int main(){
    Employee E1(30, 5, 75500.0);
    E1.display();
    cout << "Salary in thousands: " << E1.getSalaryInThousands() << endl;

    Employee E2(42, 15, 9500.00);
    E2.display();

    return 0;
}

