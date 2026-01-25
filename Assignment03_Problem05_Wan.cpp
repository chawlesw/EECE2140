#include <iostream>
#include <cmath>
using namespace std;

float power_sum(float a, float b)
{
    float power_sum = pow(a, b) + pow(b, a); // a^b + b^a
    return power_sum;
}


int main()
{
    cout << "power_sum: " << power_sum(3,8) << endl;
    return 0;
}