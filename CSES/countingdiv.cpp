#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 
    vector<int> nums(n); 
    int m = 0; 
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        m = max(m,nums[i]); 
    }

    vector<int> cnts(m + 1, 0); 
    
    for(int i = 1; i <= m; i++){
        for(int k = i; k <= m; k+=i){
            cnts[k]++; 
        }
    }

    for(auto i: nums){
        cout << cnts[i] << "\n"; 
    }

    return 0;

}