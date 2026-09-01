#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin >> t; 

    while(t--){
        int n; cin >> n; 

        n = n + 1;
        bool best = true;

        for(int i = 2; i < n; i++){
            if (n%i == 0){
                best = false;
            }
        }
        cout << (best == true ? "YES": "NO") << "\n";
    }
}