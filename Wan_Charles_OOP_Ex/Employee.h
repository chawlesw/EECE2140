/*
Employee.h
Declares the Employee class, including private data members, public 
constructors, getter/setter methods, and the display method.

By: Charles Wan
EECE 2140 - Professor Nafa
27 February, 2026
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
private:
    int itsAge;
    int itsYearsOfService;
    double itsSalary;

public:
    // Default Constructor
    Employee(): itsAge(0), itsYearsOfService(0), itsSalary(0) {}

    Employee(int age, int years, double salary) 
    : itsAge(age), itsYearsOfService(years), itsSalary(salary){}

    int getAge() const;
    int getYearsOfService() const;
    double getSalary() const;
    int getSalaryInThousands() const;

    void setAge(int age);
    void setYearsOfService(int years);
    void setSalary(double salary);

    void display();
};
#endif