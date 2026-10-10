#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n, q; cin >> n >> q; 
    vector <ll> sumarr(n + 1, 0);
 
    for(int i = 1; i <= n; i++){
        ll num; cin >> num; 
        sumarr[i] = num + sumarr[i-1]; 
    }

    for(int i = 0; i < q; i++){
        int a,b; cin >> a >> b; 
        cout << sumarr[b] - sumarr[a-1] << "\n"; 
    }


    return 0;

}