#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int counta = 0;
        int countb = 0;
        for(int i = 0; i < a; i++){
            int c = 0;
            if(i == 0){
                cin >> c;
                counta+=c;
            }
            else{
                cin >> c;
                counta++;
            }
        }
        for(int i = 0; i < b; i++){
            int c = 0;
            if(i == 0){
                cin >> c;
                countb+=c;
            }
            else{
                cin >> c;
                countb++;
            }
        }
        if (counta >= countb){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }
    }
    return 0;
}