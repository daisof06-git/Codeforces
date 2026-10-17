#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    ll a, b; cin >> a >> b;
    if(a == b){
        cout << 1 << "\n"; 
    }
    else if(b - a >= 5){
        cout << 0 << "\n";
    }
    else{
        ll num = 1; 
        for(ll i = b; i > a; i--) num = num * (i%10); 
        cout << num%10 << "\n"; 
    }
    return 0;

}