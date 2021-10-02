#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int r;
        string s;
        cin >> r >> s;
        for (int i=0; i < s.size(); i++){
            for(int j=0; j < r; j++){
                cout << s[i];
            }
        }
        cout << endl;
    }
}