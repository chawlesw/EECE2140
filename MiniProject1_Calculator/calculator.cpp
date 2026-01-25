/*
Calculator with addition, subtraction, multiplication, divison, and modulus.

EECE2140, Professor Nafa
By: Charles Wan
26 January, 2026
*/

#include <iostream>
#include <cmath>
using namespace std;

float Addition(float x, float y){
    return x + y;
}
float Subtraction(float x, float y){
    return x - y;
}
float Multiplication(float x, float y){
    return x * y;
}
float Division(float x, float y){
    return x / y;
}
int Modulus(int a, int b){
    return a % b;
}

int main(){
    float x, y;
    int a, b;
    int choice;

    do 
    {
        //Menu
        cout << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "0. Exit" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Value of x: ";
                cin >> x;
                cout << "Value of y: ";
                cin >> y;            
                cout << "Sum: " << Addition(x, y) << endl;
                break;

            case 2:
                cout << "Value of x: ";
                cin >> x;
                cout << "Value of y: ";
                cin >> y;   
                cout << "Difference: " << Subtraction(x ,y) << endl;        
                break;

            case 3:
                cout << "Value of x: ";
                cin >> x;
                cout << "Value of y: ";
                cin >> y;   
                cout << "Product: " << Multiplication(x ,y) << endl;
                break;

            case 4:
                cout << "Value of x: ";
                cin >> x;
                cout << "Value of y: ";
                cin >> y; 
                if (y != 0){
                    cout << "Quotient: " << Division(x ,y) << endl;  
                }  
                else{
                    cout << "Error: Divide by 0" << endl;
                }
                break;

            case 5:
                cout << "Value of integer a: ";
                cin >> a;
                cout << "Value of integer b: ";
                cin >> b;            
                if (b != 0){
                    cout << "Remainder: " << Modulus(a ,b) << endl;  
                }  
                else{
                    cout << "Error: Modulus by 0" << endl;
                }
                break;                

            case 0:
                break;

            default:
                cout << "Invalid option" << endl;
        }
    } while (choice != 0);

    return 0;
}