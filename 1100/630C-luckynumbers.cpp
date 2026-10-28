#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9+7; 

ll binexp(ll a, ll b){
    ll r = 1; 
    while(b > 0){
        if(b%2 == 1){
            r = a*r; 
        }
        a = a * a; 
        b/=2; 
    }
    return r; 
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    ll n; cin >> n; 
    ll num = binexp(2, n+1) - 2; 

    cout << num << "\n"; 

    return 0;

}