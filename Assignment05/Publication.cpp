#include "Publication.h"
#include <iostream>
using namespace std;

double calculateCost(int pages, bool hardcover, int colorPages, double discountPercent){
    float baseCost = 0.05 * pages;
    float hardcoverFee = 0.0;
    float colorpageFee = 0.0;
    double totalCost = 0.0;

    // Error Management
    if (pages <= 0 || colorPages < 0 || colorPages > pages) { 
        return -1;
    }

    if (hardcover) {
        hardcoverFee = 7.5;
    }

    colorpageFee = 0.20 * colorPages;

    if (discountPercent <= 50) {
        totalCost = (1 - discountPercent/100) * (baseCost + hardcoverFee + colorpageFee);
    } else {
        return -2;
    }
    return totalCost;        
}

double calculateCost(int pages, bool hardcover, int colorPages){
    return calculateCost(pages, hardcover, colorPages, 0);
}

double calculateCost(int pages, bool hardcover){
    return calculateCost(pages, hardcover, 0, 0);
}

double calculateCost(int pages){
    return calculateCost(pages, false, 0, 0);
}


void printReceipt(int pages, bool hardcover, int colorPages, double discountPercent, double totalCost){
    cout << "======RECEIPT======" << endl;
    cout << "PAGE COUNT: " << pages << endl;
    if (hardcover) {
        cout << "HARDCOVER" << endl;
    } else {
        cout << "PAPERBACK" << endl;
    }
    cout << "COLOR PAGES: " << colorPages << endl;
    cout << "DISCOUNT: " << discountPercent << "%" << endl;
    cout << endl << "COST: $" << totalCost << endl;
    cout << "===================" << endl << endl;
}

void printReceipt(int pages, bool hardcover, int colorPages, double totalCost){
    printReceipt(pages, hardcover, colorPages, 0, totalCost);
}

void printReceipt(int pages, bool hardcover, double totalCost){
    printReceipt(pages, hardcover, 0, 0, totalCost);
}

void printReceipt(int pages, double totalCost){
    printReceipt(pages, false, 0, 0, totalCost);
}