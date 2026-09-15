#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int h, m, s; cin >>h>>m>>s; 
    if(h < 2){
        cout << '-' << "\n";
    }
    else if(h>2){
        cout << '+' <<"\n";
    }
    else{
        if(m == 30){
            if(s == 0){
                cout << "=" << "\n"; 
            }
            else{
                cout << "+" << "\n";
            }
        }
        else if(m < 30){
            cout << "-" << "\n"; 
        }
        else{
            cout << "+" << "\n";
        }
    }
    return 0;

}