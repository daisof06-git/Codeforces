#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9 + 7; 

//factoriales
vector<ll> facts = {1,1};

//cálculo de factoriales precomputados
ll factorial(int num){
    int size = facts.size(); 

    while(num >= size){
        facts.push_back(((facts[size - 1])*size)%mod); 
        size = facts.size(); 
    }
    return facts[num];  
}

//exponenciación binaria para inverso modular
ll binexp(ll a, ll b){
    ll r = 1; 

    while(b > 0){
        if(b%2 == 1){
            r = r*a%mod; 
        }
        a = a*a%mod; 
        b/=2; 
    }
    return r; 
}

//multiplicación con módulo
ll mul(ll a, ll b){ return a*b%mod;}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    //obtengo la string y n
    string s; cin >> s; 
    int len = s.length(); 

    //hago multiset y set (el set me sirve porque tiene únicas)
    multiset<char> chars; 
    set<char> c; 

    for(int i = 0; i < len; i++){
        chars.insert(s[i]); 
        c.insert(s[i]);
    }

    //vector de contadores de repeticiones
    vector<int> counts; 

    //recorro el set, y por cada char obtengo el count del multiset
    for(auto itr: c){
        counts.push_back(chars.count(itr));
    }

    //me armo el denominador de la división con inversos modulares
    ll denom = 1; 
    for(auto itr: counts){
        denom = mul(denom, binexp(factorial(itr), mod - 2));
    }

    //el denom es un inverso modular, el factorial de n va arriba. 
    cout << mul(factorial(len), denom)%mod << "\n"; 
    return 0;

}





