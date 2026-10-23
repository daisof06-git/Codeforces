#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9 + 7; 

//vector de factoriales precomputados
vector<ll> facts = {1, 1}; 

//multiplicación modular
ll mul(ll a, ll b){ return a*b%mod;}


//inverso modular
ll modinv(ll num, ll pow){
    ll r = 1; 
    while(pow > 0){
        if(pow %2 == 1){
        r = r * num%mod; 
        }
        num = num*num%mod; 
        pow /=2; 
    }
    return r;     
}

//factorial 
ll factorial(int num){
    int size = facts.size(); 
    while(num >= size){
        facts.push_back((facts[size - 1]*size)%mod); 
        size = facts.size(); 
    }
    return facts[num]; 
}

//binomial coefficient
ll bincoeff(int a, int b){ 
    return mul(mul(factorial(a), modinv(factorial(b), mod - 2)), modinv(factorial(a-b), mod - 2)); 
}


int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 

    while(n--){
        int a, b; cin >> a >> b; 

        cout << bincoeff(a,b)%mod << "\n"; 
    }

    return 0;

} 