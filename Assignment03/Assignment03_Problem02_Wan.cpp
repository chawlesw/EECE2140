#include <iostream>
#include <cmath>
using namespace std;

/* Returns true if the floor of the product of the first two numbers equals
 the floor of the third number; otherwise it returns false. */
double floor_comparison(double a, double b, double c) //
{
    double f_product = floor(a*b);
    if (f_product == floor(c))
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main()
{
cout << "Floor comparison (1 = True, 0 = False): " << floor_comparison(4, 5.2, 20.2) << endl;
return 0;
}