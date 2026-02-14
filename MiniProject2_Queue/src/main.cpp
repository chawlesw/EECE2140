/*
main.cpp
Interactive menu program for testing Queue class

By: Charles Wan
EECE 2140 - Professor Nafa - Mini Project 2
14 Febuary, 2026
*/

#include <iostream>
#include "../include/queue.h"
using namespace std;

int main(){
int userInput = 10;
int item = 0;
Queue q1;
do {
    cout << "=======MENU=======" << endl;
    cout << "Option 1: Enqueue" << endl;
    cout << "Option 2: Dequeue" << endl;
    cout << "Option 3: Peek" << endl;
    cout << "Option 4: Size" << endl;
    cout << "Option 0: Exit" << endl;
    cout << "===================" << endl;
    cout << "Menu Option: ";
    cin >> userInput;

    switch (userInput) {
        case 1:
            cout << "Integer to enqueue: ";
            cin >> item;
            q1.enqueue(item);
            break;

        case 2:
            cout << "Element dequeued: " << q1.dequeue() << endl;
            break;           

        case 3:
            cout << "Front element: " << q1.peek() << endl;
            break;  

        case 4:
            cout << "Queue size:: " << q1.size() << endl;
            break;  

        case 0:
            break;  
    } 
} while (userInput != 0);

return 0;
}