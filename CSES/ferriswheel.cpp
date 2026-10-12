#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n, x; cin >> n >> x; 

    vector<int> children(n);
    for(int i = 0; i < n; i++){
        cin >> children[i]; 
    }

    sort(children.begin(), children.end());

    int count = 0; 
    int l = 0; 
    int r = n - 1;
    while(l <= r){
        if(children[l]+children[r] <= x){
            l++; 
        }
        count++; 
        r--; 
    }

    cout << count << "\n"; 
    return 0;

}