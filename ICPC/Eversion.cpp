#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n; 
        int m = 0, pos = 0;
        vector<int> arr(n);
        for(int j = 0; j < n; j++){
            cin>>arr[j]; 
            if(arr[j] >= m){
                m = arr[j];
                pos = j;
            }
        }

        int count = 0, act = 0, last = arr[n-1];
        if(arr[n-1] != m){
            count++;
            for(int k = n - 1; k > pos; k--){
                act = arr[k];
                if(act > last){
                    count++;
                    last = act;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}