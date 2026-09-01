#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    
    while(t--){
        long long n; cin >> n;

        // if n is div by 2, then print all 1s (it's the largest num that can be made)
        if(n%2 == 0){
            n = n/2; 
            for(long long i = 0; i < n; i++){
                cout << 1; 
            }
        }

        //else print a num of the form 7111...1 
        else{
            n = (n - 3)/2;
            cout << 7;
            for(long long i = 0; i < n; i++){
                cout << 1; 
            }
        }
        cout << "\n";
    }
    return 0;
}