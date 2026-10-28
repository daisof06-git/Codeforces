#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9+7; 

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 

        vector<int> numbers; 
        vector<int> pos(1001, 0); 
        set<int> nums; 
        
        for(int i = 0; i < n; i++){
            int a; cin >> a; 
            numbers.push_back(a); 
        }

        for(int i = n-1; i >= 0; i--){
            if(nums.find(numbers[i]) == nums.end()){
                nums.insert(numbers[i]); 
                pos[numbers[i]] = i + 1; 
            }
        }

        int m = -1; 

        for(auto i: nums){
            for(auto j: nums){
                if(gcd(i,j) == 1){
                    m = max(m, (pos[i]+pos[j])); 
                }
            }
        }
        cout << m << "\n"; 

    }
    return 0;

}