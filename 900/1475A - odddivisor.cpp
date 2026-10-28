#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    while(t--){
        ll num; cin >> num; 

        //si es par, factorizarlo por 2 todo lo que se pueda
        while(num%2==0){
            num/=2; 
        }

        //si el número o lo que sobra es 1, no tiene divisores impares
        if(num == 1){
            cout << "NO" << "\n"; 
        }

        //si te queda algo distinto de 1 o el número es impar, ya tiene (cuenta que se divida por sí mismo)
        else{
            cout << "YES" <<"\n"; 
        }
    }

    return 0;

}