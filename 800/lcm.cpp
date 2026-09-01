#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin>>t; 
    for(int i = 0; i < t; i++){
        //get left and right bounds
        int a, b; cin >> a >> b; 

        //make x the left bound
        int x = a; 

        //y is the minimum multiple of x (2*x)
        int y = 2*x; 

        //if y is in the range, cout x and y. 
        if(y <= b){
            cout << x << " " << y << "\n";
        }
        else{
            cout << "-1 -1" << "\n";
        }
    }
    return 0;
}
