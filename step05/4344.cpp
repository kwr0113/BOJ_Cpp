#include <iostream>
using namespace std;

int main(void){
    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
        int n;
        double total = 0;
        cin >> n;
        int *score = new int[n];
        for(int j=0; j<n; j++){
            cin >> score[j];
            total += score[j];
        }
        double avg = total / n;
        double m = 0;
        for(int j=0; j<n; j++){
            if(score[j] > avg)
                m += 1;
        }
        double per = m * 100 / n;
        printf("%.3f%%\n", per);
    }
}