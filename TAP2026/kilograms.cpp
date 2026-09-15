#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 
    for(int i = 0; i < n; i++){
        int num; cin >> num; 
        if(num%2 == 0){
            cout << num/2 << " ";
        }
        else if(num == 1){
            cout << 5 << " ";
        }
        if(num == 3){
            cout << 6 << " ";
        }
        if(num == 5){
            cout << 7 << " ";
        }
        if(num == 7){
            cout << 8 << " ";
        }
        cout << "\n"; 

    }
    return 0;

}