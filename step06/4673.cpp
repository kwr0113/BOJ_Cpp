#include <iostream>
using namespace std;
bool self[10001];

int d(int a){
    int num = a;
    while (true){
        if (a == 0) break;
        num += a % 10;
        a /= 10;
    }
    return num;
}

int main(void){
    for(int i = 1; i < 10001; i++){
        int n = d(i);
        if(n < 10001) self[n] = true;
    }
    for(int i = 1; i < 10001; i++)
        if(!self[i])
            printf("%d\n", i);
    return 0;
}
