#include <iostream>
#include <string>
using namespace std;

//WEEK 2

int main() {
    //Declaration & Initialization
    int n;
    string secretCode = "";
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    //Ask user for code length
    cout << "How many numbers are in the secret sequence" << endl;
    cin >> n;

    //Gets code from user, code stored in a string
    for(int i=0; i<n; i++)
    {
        string digit;
        cout << "enter a code " << i+1 << ": ";
        cin >> digit;
        secretCode += digit;
    }

    //Loops n times
    for (int i = 0; i < n; i++)
    {
        //Converts secretCode into integer and stores inside variable
        int digit = int(secretCode[i]) - 48;
        //Converts each number in secretCode to corresponding Alphabet character
        if(digit >= 1 && digit <= 26 )
        {
            secretCode[i] = alphabet[digit-1];
        }

        else{
            
        }
    }

    cout << secretCode << endl;

    return 0;
}