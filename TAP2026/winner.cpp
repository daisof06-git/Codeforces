#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n, k; cin >> n >> k; 

    if((n == 2 && k%2==1)|| k == 1){
        cout << 'S' << "\n";
    }
    else{
        cout << 'N' << "\n";
    }
    return 0;

}