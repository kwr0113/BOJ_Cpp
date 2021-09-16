#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int total = 0, score = 0;
        string test;
        cin >> test;
        for (int i = 0; i < test.length(); i++){
            if(test[i] == 'O'){
                score += 1;
                total += score;
            }else{
                score = 0;
            }
        }
        cout << total << endl;
        total = 0, score = 0;
    }
}