#include <iostream>
using namespace std;

int mystery(int x, int y , int z);


int main(){
    cout << mystery(4, 18, 12) << endl;
    cout << mystery(6, -3, 45) << endl;
    cout << mystery(-5, 12, 7) << endl;
    cout << mystery(1, 0, 0) << endl;
    cout << mystery(10, 10, 10) << endl;

    return 0;
}