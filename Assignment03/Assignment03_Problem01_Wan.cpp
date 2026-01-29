#include <iostream>
#include <cmath>
using namespace std;


float operation_b(float x,float y) // (5x-3xy)^(1/2)
{
    float b1 = (5*x) - 3*(x*y);
    float b2 = pow(b1, 0.5);
    return b2;
}

//----------------------------------------------------------------------------------------

float operation_c(float a,float b) // (a+b)^(1/3)
{
    float c1 = a + b;
    float c2 = pow(c1, 1.0/3);
    return c2;
}

//----------------------------------------------------------------------------------------

float operation_d(float a,float b, float c) // Quadratic Formula
{
    float d_radicand = pow(b, 2) - 4*(a*c); // b^2 - 4ac
    float d_numerator = -b + pow(d_radicand, 0.5); // -b + (b^2 - 4ac)^1/2
    float d_result = d_numerator/(2*a); // (-b + (b^2 - 4ac)^1/2)/2a
    return d_result;
}

//----------------------------------------------------------------------------------------

float operation_e(float x,float y) // |3x^2 - 2y|
{
    float e_inside = (3*pow(x,2)) - (2*y);
    float e_result = fabs(e_inside);
    return e_result;
}

//========================================================================================

int main()
{
    float operation_a = 9*pow(2,4);

    cout << "operation_a: " << operation_a << endl;
    cout << "operation_b: " << operation_b(3, 1) << endl;
    cout << "operation_c: " << operation_c(3,1) << endl;
    cout << "operation_d: " << operation_d(5, 10, 3) << endl;
    cout << "operation_e: " << operation_e(2, 10) << endl;

    return 0;
}

