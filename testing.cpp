#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // int n = 4;
    // for(int i = 0; i < n; i ++){
    //     for(int a = 0; a <= i; a ++){
    //         cout << "x";
    //     }
    // cout << endl;
    // }
    // cout << endl;

// Asks the user how many numbers they want to enter
// Reads that many numbers
// Prints the largest number entered
int user_input;
cout << "How many numbers do you want to enter?: ";
cin >> user_input;
int number[user_input];
for(int i = 1; i <= user_input; i++)
{
    cout << "Number " << i << ": ";
    cin >> number[i-1];
}
cout << number;
return 0;
}