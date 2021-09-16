#include <iostream>
using namespace std;

int main(void){
    int n, max = 0;
    double total = 0;
    cin >> n;
    double *score = new double[n];
    double *n_score = new double[n];
    for(int i = 0; i < n; i++){
        double s;
        cin >> s;
        score[i] = s;
        max = (s > max) ? s : max;
    }
    for(int i = 0; i < n; i++){
        n_score[i] = score[i] * 100 / max ;
        total += n_score[i];
    }
    cout << total/n << endl;
}