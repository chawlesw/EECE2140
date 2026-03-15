/*
Order.cpp
Defines an Order class with table number, server name, and number of patrons.
Includes a private static minimum charge of $4.75.
Demonstrates calling a static member function without creating any objects.

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
static double getMinTableCharge(){
    return minTableCharge;
}

};
double Order::minTableCharge = 4.75;

int main(){
    cout << "Minimum Charge: $" << Order::getMinTableCharge() << endl;

    return 0;
}