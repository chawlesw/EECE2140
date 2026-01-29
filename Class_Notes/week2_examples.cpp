#include <iostream>
using namespace std;

//WEEK 2
void greet ()
{
    cout << "Hello from a function!" << endl;
}

int add(int a, int b){
    return a+b;
}

double area (double width, double height){
    return width *height;
}

int main() 
{
    /* Adding
    int x = 5;
    int y = 7;

    cout << endl;
    cout << x+y << " " << x*y;
    cout << endl;

    return 0;
    */
    /* Basic input/output
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You entered: " << age << endl;
    return 0;
    */
    /* Variable, datatypes, and typecasting
    int a =10;
    double b =3.5;
    double result = double(a)/b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Result of a/b = " << result << endl;

    return 0;
    */
   /* Operators & Expressions 
    int x = 8;
   int y = 3;

   cout << "x + y = " << x + y << endl;
   cout << "x + y = " << x - y << endl;
   cout << "x + y = " << x * y << endl;
   cout << "x + y = " << x / y << endl;
   cout << "x + y = " << x % y << endl;

    return 0;
    */
    /* If/Else 
    int temp = 25;
    if (temp > 25){
        cout << "It's hot outside!" << endl;
    }
    else{
        cout << "It's cool outside." << endl;
    }

    return 0;
    */
    /* Switch statement 
    int day =3;
    switch(day) {
        case 1: cout<< "Monday"; break;
        case 2: cout<< "Tuesday"; break;
        case 3: cout<< "Wednesday"; break;
        default: cout<< "Invalid day"; break;
    }

   return 0;
   */
  /* For Loop 
    for (int i=1; i<5; i++){
        cout << "Count: " << i << endl;
    }
   return 0;
   */
    /* Calling a function
    greet();
   return 0;
   */
    /* Function with parameters 
   int result = add(4,6);
   cout << "Sum = " << result << endl;
   return 0;
   */
  /* Function with return value and user input 
    double w, h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;
    cout << "Area = " << area(w, h) << endl;
   return 0;
   */

}

