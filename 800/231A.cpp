#include <iostream>
using namespace std;

int main() 
{
    int count = 0;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++){
        int f, s, t; 
        cin >> f >> s >> t;
        if (f + s + t >= 2){
            count++; 
        }
    }
    cout << count; 
    return 0;
}