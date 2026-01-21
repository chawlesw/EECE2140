#include <iostream>
#include <string>
using namespace std;

void decode()
{
    //Ask user for code length
    cout << "How many numbers are in the secret sequence" << endl;
    int n;
    cin >> n;
    while (n <= 0){
        cout << "How many numbers are in the secret sequence" << endl;
        cin >> n;
    }

    int userCode[n];
    string secretCode;

    //Gets code from user, code stored in a string
    for(int i=0; i<n; i++)
    {
        cout << "enter a code " << i+1 << ": ";
        cin >> userCode[i];
    }

    //Loops n times
    for (int i = 0; i < n; i++)
    {
        //Converts each number in userCode to corresponding Alphabet character and stores inside secretCode
        if(userCode[i] >= 1 && userCode[i] <= 26 )
        {
            string x;
            string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            x = alphabet[userCode[i]-1];
            secretCode += x;
        }
        else
        {
            secretCode += "?";
        }
    }
    cout << "The secret code is: " << secretCode << endl;
}

int main() 
{
    int choice;
    do 
    {
        //Menu
        cout << endl;
        cout << "1. Decode a message" << endl;
        cout << "2. Show instructions" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                decode();
                break;
            case 2:
                cout << "Type code length. Enter numbers 1-26. They convert to A-Z. Other numbers become '?'." << endl;
                break;
            case 0:
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (choice != 0);
    return 0;
}


