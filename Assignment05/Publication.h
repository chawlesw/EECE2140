#ifndef PUBLICATION_H
#define PUBLICATION_H
//Header guards are to make sure the header file isn't accidently called multiple times in the main code or other files.

double calculateCost(int pages);
double calculateCost(int pages, bool hardcover);
double calculateCost(int pages, bool hardcover, int colorPages);
double calculateCost(int pages, bool hardcover, int colorPages, double discountPercent);

void printReceipt(int pages, double totalCost);
void printReceipt(int pages, bool hardcover, double totalCost);
void printReceipt(int pages, bool hardcover, int colorPages, double totalCost);
void printReceipt(int pages, bool hardcover, int colorPages, double discountPercent, double totalCost);

#endif