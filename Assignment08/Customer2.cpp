/*
Customer2.cpp
Uses the Customer class to create an array of 5 Customer objects.
Prompts the user to enter data for each, then displays all customers.

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
    const int size = 5;

    int ID;
    string lastName;
    string firstName;
    double creditLimit;

    Customer c[size];
    for (int i = 0; i < size; i++){
        cout << "CUSTOMER: " << i+1 << endl;

        cout << "Set ID: ";
        cin >> ID;
        c[i].setID(ID);

        cout << "Set last name: ";
        cin >> lastName;        
        c[i].setLastName(lastName);

        cout << "Set first name: ";
        cin >> firstName;     
        c[i].setFirstName(firstName);

        cout << "Set credit limit: ";
        cin >> creditLimit;     
        c[i].setCreditLimit(creditLimit);
    }
    
    for (int i = 0; i < size; i++){
        cout << "====Customer" << i+1 << "====" << endl;
        c[i].displayInfo();
    }
    
    return 0;
}