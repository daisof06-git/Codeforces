#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;
const ll mod = 1e9+7; 

//esto me arma vector de factorización en primos, son pares pq tengo el exponente de c/u
vector<pair<ll,int>> primefacts(ll n){
    vector<pair<ll,int>> factors; 
    int c2 = 0; 
    while(n % 2 == 0){
        n = n/2;  
        c2++; 
    }
    if(c2 != 0){
        factors.push_back({2,c2}); 
    }

    for(ll i = 3; i * i <= n; i+=2){
        int count = 0;
        while(n%i == 0){
            n = n/i;
            count++; 
        }
        if(count != 0){
            factors.push_back({i, count}); 
        }
    }

    if(n > 2){
        factors.push_back({n, 1}); 
    }
    return factors; 
}; 

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    //agarro como string pq puede ser muy grande
    string x; cin >> x;  
    int len = x.length(); 
    ll n = 0; 
    bool isl = false; 

    //si es cortito uso el número directamente
    if(len < 11){
        n = stoll(x); 
    }

    //si no, factorizo sólo los primeros 11 digitos
    else{
        isl = true; 
        string num = "";
        for(int i = 0; i < 11; i++){
        num+=x[i]; 
        }

        n = stoll(num); 
    }

    //vector de factores primos
    vector<pair<ll,int>> facts = primefacts(n); 

    //si era muy largo debo agregar al vector tantos 2s y 5s como 0s tengo que tener hasta llegar a la longitud
    if(isl){
        int veclen = facts.size(); 
        int tens = len - 11; 
        bool istwo = false;
        bool isfive = false; 
        
        //debo chequear si 2 y 5 ya están en el vector, si es así sumo al exponente que ya tienen
        for(int i = 0; i < veclen; i++){
            if(facts[i].first == 2 ){
                istwo = true; 
                facts[i].second+= tens; 
            }
            else if(facts[i].first == 5){
                isfive = true; 
                facts[i].second+=tens; 
            }
        }

        //si no están los agrego
        if(!istwo){
            facts.push_back({2, tens}); 
        }
        if(!isfive){
            facts.push_back({5,tens}); 
        }
    }

    //cantidad de primos
    int veclen = facts.size(); 

    cout << veclen << "\n"; 

    //cada primo y su exponente
    for(int i = 0; i < veclen; i++){
        cout << facts[i].first << " " << facts[i].second << "\n"; 
    }
    return 0;

}