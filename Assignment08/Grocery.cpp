/*
Grocery.cpp
Defines a GroceryItem class with stock number, price, quantity, and total value.
Uses private helper functions to validate input and calculate total value.
Creates one GroceryItem object, prompts user for data, and displays it.

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
using namespace std;

class GroceryItem{
private:
    int stockNumber;
    double price;
    int quantityInStock;
    double totalValue;

    void setStockNumber(){
        do{
        cout << "Enter a stock number between 1000 and 9999: ";
        cin >> stockNumber;
        } while (stockNumber < 1000 || stockNumber > 9999);
    }    

    void setPrice(){
        do{
            cout << "Enter price: ";
            cin >> price;
        } while (price < 0);
    }

    void setQuantity(){
        do{
            cout << "Enter quantity in stock: ";
            cin >> quantityInStock;
        } while (quantityInStock < 0);
    }

    void calcTotalValue(){
        totalValue = price * quantityInStock;
    }

public:
    void dataEntry(){
        setStockNumber();
        setPrice();
        setQuantity();
        calcTotalValue();
    }
    void displayInfo() const {
        cout << "Stock Number: " << stockNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantityInStock << endl;
        cout << "Total Value: $" << totalValue << endl;
    }    

};

int main(){
    GroceryItem g1;
    g1.dataEntry();
    g1.displayInfo();
    
    return 0;
}