#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 

    //if n < 4, there´s no operation to get to 24
    if(n < 4){
        cout << "NO" << "\n"; 
    }

    else{
        cout << "YES" << "\n"; 

        //if n is even, we can always reduce it to 1*2*3*4 
        if(n%2 == 0){
            for(int i = n; i > 4; i-=2){
                    int a = i; 
                    int b = i - 1; 
                    cout << a << " - " << b << " = " << 1 << "\n";
                    cout << "1 * 1 = 1" << "\n";
                }
            cout << "3 * 2 = 6" << "\n"; 
            cout << "6 * 1 = 6" << "\n";
            cout << "6 * 4 = 24" << "\n"; 
        }

        //if not, we substract 3 from 5, get 2, sum 2 and 1 (get 3), and always return to 24. 
        //the larger nums substract themselves and reduce to 1s, that multiply with each other. 
        else{
            for(int i = n; i > 5; i-=2){
                    int a = i; 
                    int b = i - 1; 
                    cout << a << " - " << b << " = " << 1 << "\n";
                    cout << "1 * 1 = 1" << "\n";
            }
            cout << "5 - 3 = 2" << "\n";
            cout << "2 + 1 = 3" << "\n"; 
            cout << "2 * 3 = 6" << "\n"; 
            cout << "6 * 4 = 24"<< "\n"; 
        }        
    }
    return 0;

}