#include <iostream>
using namespace std;

int main(void){
    long double a, b;
    cin >> a >> b;
    cout << a + b << endl << a - b << endl << a * b << endl;
    cout << int(a / b) << endl;
    cout << int(a) % int(b) << endl;
}