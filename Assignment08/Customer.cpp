/*
Customer.cpp
Defines a Customer class with ID, name, and credit limit (max $10,000).
Creates a Customer object, sets its data, and displays it.

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
using namespace std;

class Customer{
private:
    int ID;
    string lastName;
    string firstName;
    double creditLimit;
public:
    void setID(int ID){
        this->ID = ID;
    }
    void setLastName(string lastName){
        this->lastName = lastName;
    }
    void setFirstName(string firstName){
        this->firstName = firstName;
    }
    void setCreditLimit(double creditLimit){
        if(creditLimit > 10000)
            this->creditLimit = 10000;
        else
            this->creditLimit = creditLimit;
    }
    void displayInfo()const{
        cout << "ID: " << ID << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Credit Limit: $" << creditLimit << endl;
    }
};

int main(){
    Customer c1;
    c1.setID(1001);
    c1.setLastName("Wan");
    c1.setFirstName("Charles");
    c1.setCreditLimit(5000);
    c1.displayInfo();

    return 0;
}