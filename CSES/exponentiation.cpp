#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

ll bipow(ll a, ll b){
    const ll m = 1e9 + 7;
    ll result = 1; 
    while(b > 0){
        if(b%2 == 1){
            result = result*a%m;
        }
        a = a*a%m; 
        b/=2; 
    }

    return result; 
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n; cin >> n; 
    
    while(n--){
        ll a, b; cin >> a >> b; 
        cout << bipow(a,b) << "\n"; 
    }

    return 0;

}