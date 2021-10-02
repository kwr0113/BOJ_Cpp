#include <iostream>
using namespace std;

int main(void){
    int n;
    char *s = new char[n];
    int sum = 0;
    cin >> n >> s;
    for(int i=0; i < n; i++){
        int k = s[i] - '0';
        sum += k;
    }
    cout << sum << endl;
}