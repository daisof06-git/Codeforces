#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9 + 7; 

//multiplicación modular
ll mul(ll a, ll b){ return a*b%mod;}

//factoriales
vector<ll> facts = {1,1}; 

ll factorial(ll num){
    int size = facts.size(); 
    while(num >= size){
        facts.push_back(size*facts[size-1]%mod); 
        size = facts.size(); 
    }
    return facts[num]; 
}

//inversos modulares
ll modinv(ll a, ll b){
    ll r = 1; 
    while(b > 0){
        if(b%2 == 1){
        r = r*a%mod; 
        }
        a = a*a%mod; 
        b /= 2; 
    }
    return r; 
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    ll n, m; cin >> n >> m; 

    // coeficiente binomial de m manzanas entre n chicos. 
    cout << mul(factorial(n + m - 1), mul(modinv(factorial(n - 1), mod - 2), modinv(factorial(m), mod - 2)))%mod << "\n";

    return 0;

}