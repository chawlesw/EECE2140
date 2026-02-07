#include <iostream>
#include "Publication.h"
using namespace std;

int main() {
    int pages;
    bool hardcover;
    int colorPages;
    double discountPercent;
    double totalCost;
    int userInput = 10;

    do {
        cout << "=======MENU=======" << endl;
        cout << "Option 1: Cost by pages only" << endl;
        cout << "Option 2: Cost by pages and hardcover" << endl;
        cout << "Option 3: Cost by pages, hardcover, and color pages" << endl;
        cout << "Option 4: Cost by pages, hardcover, color pages, and discount percent" << endl;
        cout << "Option 0: Exit" << endl;
        cout << "===================" << endl;
        cout << "Menu Option: ";
        cin >> userInput;

        // double calculateCost(int pages, bool hardcover, int colorPages, double discountPercent);
        // void printReceipt(int pages, bool hardcover, int colorPages, double discountPercent, double totalCost)
        switch (userInput) {
            case 1:
                cout << "Page count: ";
                cin >> pages;
                totalCost = calculateCost(pages);
                if (totalCost >= 0)
                    printReceipt(pages, totalCost);
                else
                    cout << "ERROR" << endl;
                break;

            case 2:
                cout << "Page count: ";
                cin >> pages;
                cout << "Hardcover(1 if yes, 0 if no): ";
                cin >> hardcover;
                totalCost = calculateCost(pages, hardcover);
                if (totalCost >= 0)
                    printReceipt(pages, hardcover, totalCost);
                else
                    cout << "ERROR" << endl;
                break;           

            case 3:
                cout << "Page count: ";
                cin >> pages;
                cout << "Hardcover(1 if yes, 0 if no): ";
                cin >> hardcover;
                cout << "Color page count: ";
                cin >> colorPages;
                totalCost = calculateCost(pages, hardcover, colorPages);
                if (totalCost >= 0)
                    printReceipt(pages, hardcover, colorPages, totalCost);
                else
                    cout << "ERROR" << endl;
                break;  

            case 4:
                cout << "Page count: ";
                cin >> pages;
                cout << "Hardcover(1 if yes, 0 if no): ";
                cin >> hardcover;
                cout << "Color page count: ";
                cin >> colorPages;
                cout << "Discount Percent: ";
                cin >> discountPercent;
                totalCost = calculateCost(pages, hardcover, colorPages, discountPercent);
                if (totalCost >= 0)
                    printReceipt(pages, hardcover, colorPages, discountPercent, totalCost);
                else if (totalCost == -2)
                    cout << "Invalid Discount. Must be between 0-50." << endl;
                else
                    cout << "ERROR" << endl;
                break;  

            case 0:
                break;  
                
        } 
    } while (userInput != 0);

    return 0;
}