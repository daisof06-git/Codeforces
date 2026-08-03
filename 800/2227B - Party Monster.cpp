#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    char b = '(';
    char c = ')';

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int countb = 0;
        int countc = 0;
        for (int i = 0; i<n; i++){
            if(a[i] == b){
                countb++;
            }
            if(a[i] == c){
                countc++;
            }
        }
        if ((countb - countc) < 0 || (countb - countc) > 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES"<<"\n";
        }

    }
    return 0;
}