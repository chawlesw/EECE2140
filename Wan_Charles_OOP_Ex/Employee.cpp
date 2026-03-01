/*
Employee.cpp
Implements the Employee class methods defined in Employee.h, including 
accessors, input validation, salary calculation, and formatted output.

By: Charles Wan
EECE 2140 - Professor Nafa
27 February, 2026
*/

#include "Employee.h"
#include <iostream>
#include <cmath>
using namespace std;
    
int Employee::getAge() const{
    return itsAge;
}
int Employee::getYearsOfService() const{
    return itsYearsOfService;
}
double Employee::getSalary() const{
    return itsSalary;
}
int Employee::getSalaryInThousands() const{
    int salary = round(itsSalary/1000);
    return salary;
}

//Havent yet added input validation in setter methods
void Employee::setAge(int age){
    if (age >= 0)
        itsAge = age;
    else
        cout << "Error: Invalid Age" << endl;
}
void Employee::setYearsOfService(int years){
    if (years >= 0)
        itsYearsOfService = years;
    else
        cout << "Error: Invalid Year" << endl;
}
void Employee::setSalary(double salary){
    if (salary >= 0)
        itsSalary = salary;
    else
        cout << "Error: Invalid Salary" << endl;

}

void Employee::display(){
    cout << "Age: " << itsAge << " years" << endl;
    cout << "Years of Service: " << itsYearsOfService << " years" << endl;
    cout << "Salary: $" << itsSalary << endl;
}



