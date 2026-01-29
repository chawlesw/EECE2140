/*
Program to learn debugging and loops.

EECE2140, Professor Nafa
By: Charles Wan
01/23/2025
*/

#include <iostream>
using namespace std;

//============================================================================================ 
int sum(int a, int b)
{
    int sum = 0;
    for (int i=a; i<=b; i++)
    {
        sum = sum + i;
    }
    return sum;
}

//============================================================================================ 

int main()
{
cout << sum(1,10) << endl;

return 0;
}
