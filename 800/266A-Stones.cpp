#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n; 
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    for (int i = n; i > 0; i--){
        if(a[i] == a[i-1]){
            a.erase(i-1, 1);
            count++;
        }
    }
    cout << count;
    return 0;
}