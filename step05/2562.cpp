#include <iostream>
using namespace std;

int main(void){
    int max = -1, num = 0;
    for(int i=0; i<9; i++){
        int a;
        cin >> a;
        if(max < a){
            max = a;
            num = i+1;
        }
    }
    cout << max << endl;
    cout << num << endl;
}