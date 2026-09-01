#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    for(int i = 0; i < t; i++){

        // get number
        long long n; cin >> n; 

        long long a = 0, b = 0;

        //if its modulo 12 is different than 10, a can be the remainder (because 0 to 9 and 11 are palindromes)
        if(n % 12 != 10) {
            a = n % 12; 
            b = n - a;
            cout << a << " " << b << "\n";
        }

        //if its modulo is equal to 10, the only way to do it is if a is 22 (or another palindrome with remainder 10, but 22 is the minimum)
        else if (n >= 22) {
            a = 22; 
            b = n - a;
            cout << a << " " << b << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}
