#include <iostream>
using namespace std;

int main(void){
    long double a, b;
    cin >> a >> b;
    cout.precision(9);
    cout << fixed;
    cout << a / b << endl;
}