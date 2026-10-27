#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

//programa para ver si es primo
bool isprime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            return false; 
        }
    }
    return true; 
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    //100% fuerza bruta
    int n; cin >> n; 
    int m = 1; 
    while(isprime((n*m)+1)){
        m++; 
    }
    cout << m <<"\n"; 

    return 0;

}