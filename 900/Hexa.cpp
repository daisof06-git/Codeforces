#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    // get n
    int n; cin >> n; 

    //create a vector for fibonacci nums
    vector<int> fib = {0,1};
    
    int a = 0, b = 1; 

    while(a!= n && b != n){
        a = a + b;
        b = b + a;
        fib.push_back(a);
        fib.push_back(b);
    }
    int len = fib.size();

    //if n is 0 or 1, the sum will be formed by those two nums
    if(n == 0 || n == 1){
        cout << 0 << " " << 0 << " " << n << "\n";
    }

    //else, use 0 and the last two nums. 
    else if(fib[len - 1] == n){
        cout << 0 << " " << fib[len - 2] << " " << fib[len - 3] << "\n";
    }

    else{
        cout << 0 << " " << fib[len - 3] << " " << fib[len - 4] << "\n";
    }
    return 0;
}