#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
 
    for(int i = 0; i <= n; i++){
        string w;
        cin >> w;
        int l = w.length();
        if (l <= 10){
            cout << w << "\n";
        }
        else{
            char a = w[0];
            char z = w[l-1];
            int b = l - 2;
            string r = a + to_string(b) + z;
            cout << r << "\n";
        }
    }
    return 0;
}