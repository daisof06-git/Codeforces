#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 
    set<ll> nums; 

    for(int i=0; i < n; i++){
        ll num; cin >> num; 
        nums.insert(num);
    }

    cout << nums.size() << "\n"; 
    return 0;

}