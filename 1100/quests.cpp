#include <bits/stdc++.h>
using namespace std; 

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    while(t--){
        int n, k; cin >> n >> k; 
        vector <int> a(n);
        vector <int> b(n);
        
        //vector a stores the accumulated sum for each index
        for(int i = 0; i < n; i++){
            if(i == 0){
                cin >> a[i];
            }
            else{
                cin >> a[i];
                a[i] += a[i-1];
            }
        }

        //vector b stores the max for the range that ends in i
        for(int i = 0; i < n; i++){
            if(i == 0){
                cin >> b[i];
            }
            else{
                cin >> b[i];
                b[i] = max(b[i], b[i-1]);
            }
            
        }

        //define a pointer that starts at tha maximum index reached possible
        int pt = min(k-1,n-1);
        int m = 0;

        //check maximum sums. If he plays less quests than k, the rest will be summed from b. 
        for(int i = 0; i <= pt ; i++){
            int s = 0; 
            s+=a[i]; 
            if(i < k){
                s+= b[i]*(k-1-i);
            }
            m = max(m, s);
        }
        cout << m << "\n";
    }
}