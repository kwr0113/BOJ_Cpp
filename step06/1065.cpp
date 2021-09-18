#include <iostream>
using namespace std;

bool is_han(int a){
    if(a < 100) return true;
    else{
        int a1 = a / 100;
        int a2 = a / 10 % 10;
        int a3 = a % 10;
        if(a1 - a2 == a2 - a3) return true;
    }
    return false;
}

int main(void){
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(is_han(i)) count += 1;
    }
    cout << count << endl;
}