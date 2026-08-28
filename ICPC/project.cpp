#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        long long n, g, b; cin >> n >> g >> b; 
        long long count = 0; 
        
        if(n < g) count = n; 
        
        else{
            long long gdays = (n+1)/2; 
            long long times = gdays / g; 
            long long rest = gdays%g; 

            if(rest == 0){
                count+= gdays; 
                count+= (times-1)*b; 
            }
            else{
                count+= gdays + times*b; 
            }
        }
        
        if(count < n){
            count += (n-count);
        }
        cout << count << "\n"; 

    }

    return 0;
}