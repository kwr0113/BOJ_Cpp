#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n = 0;
    cin >> n;
    int *num = new int[n];
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        num[i] = a;
    }
    sort(num, num + n);
    cout << num[0] << " " << num[n-1] << endl;
    delete[] num;
}