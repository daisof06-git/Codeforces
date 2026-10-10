#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    ll n; cin >> n; 
    ll realsum = (n*(n+1))/2; 
    ll givensum = 0; 

    for(int i = 0; i < n-1; i++){
        ll num; cin >> num; 
        givensum += num; 
    }

    ll miss = realsum - givensum;
    
    cout << miss << "\n"; 
    return 0;

}