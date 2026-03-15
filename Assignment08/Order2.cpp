/*
Order2.cpp
Uses the Order class to create one Order object with table, server, and patron data.
Displays order info including total charge (minimum charge × number of patrons).

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
using namespace std;

class Order{
private:
    int tableNumber;
    string serverName;
    int patronNumber;
    static double minTableCharge;
public:
Order(int tableNumber, string serverName, int patronNumber) : tableNumber(tableNumber), serverName(serverName), patronNumber(patronNumber) {}

void displayInfo() const {
    cout << "Table Number: " << tableNumber << endl;
    cout << "Server Name: " << serverName << endl;
    cout << "Number of Patrons: " << patronNumber << endl;
    cout << "Total Charge: $" << minTableCharge * patronNumber << endl;
}

static double getMinTableCharge(){
    return minTableCharge;
}

};
double Order::minTableCharge = 4.75;

int main(){
    Order o1(5, "Alice", 3);
    o1.displayInfo();

    return 0;
}