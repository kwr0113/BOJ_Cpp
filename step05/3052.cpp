#include <iostream>
using namespace std;

int main(void){
    int arr[42] = {0};
    for(int i=0; i<10; i++){
        int num;
        cin >> num;
        arr[num%42]++;
    }
    int count = 0;
    for(int i=0; i<42; i++){
        if(arr[i]!=0) count++;
    }
    cout << count;
}