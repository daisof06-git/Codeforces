#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n; cin >> n; 

    cout << n << " "; 
    while(n != 1){
        if(n%2 == 0){
            n = n/2; 
        }
        else{
            n = n*3 + 1;
        }
        cout << n << " "; 
    }
    cout << "\n"; 
    return 0;

}