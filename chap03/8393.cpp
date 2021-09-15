#include <iostream>
using namespace std;

int main(void){
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        count += i+1;
    cout << count << endl;
}