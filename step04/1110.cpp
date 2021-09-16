#include <iostream>
using namespace std;

int main(void){
    int n, n1, count = 0;
    cin >> n;
    n1 = n;
    while(true){
        if(n == n1 && count != 0)
            break;
        n1 = (n1%10)*10+((int(n1/10)+(n1%10))%10);
        count += 1;
    }
    cout << count << endl;
}