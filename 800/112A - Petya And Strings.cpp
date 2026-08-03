#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() 
{
    string a;
    cin >> a;

    string b;
    cin>>b; 

    int n = 0;
    int len = a.length();

    for(int i = 0; i < len; i++){
        if(tolower(a[i]) < tolower(b[i])){
            n = -1;
            break;
        }
        else if(tolower(a[i]) > tolower(b[i])){
            n = 1;
            break;
        }
    }
    cout << n;
    return 0;
}