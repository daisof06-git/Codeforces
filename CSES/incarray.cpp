#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    
    int n; cin >> n; 
    ll count = 0; 
    for(int i = 0; i < n; i++){
        ll num; cin >> num; 
        ll last; 
        if(i == 0){
            last = num;
        }

        else if(num < last){
            count += (last - num); 
            last = last; 
        }
        
        else{
            last = num; 
        }
    }

    cout << count << "\n";
    return 0;

}