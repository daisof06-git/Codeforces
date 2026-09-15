#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 

        //get odds, four multiples and even numbers. 
        int odd = 0, fours = 0, twos = 0; 
        for(int i = 0; i < n; i++){
            int num; cin >> num; 

            //if it's odd, add to that count
            if( num % 2 == 1){
                odd++; 
            }

            //check if it's a 4 multiple and add to that count
            else if(num % 4 == 0){
                fours++; 
            }

            //else, it's even, add to that one
            else{
                twos++; 
            }
        }

        //the remaining maximum count it's the max between these three. 
        cout << max(max(odd, fours), twos) << "\n"; 
    }
    
    return 0;

}