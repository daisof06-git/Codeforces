#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() 
{
    //get 3+2+1 and return 1+2+3 (sorted)
    //get the input
    string a;
    cin >> a;
    int len = a.length();

    //create an empty string and add all numbers from the input
    string b = "";
    for(int i = 0; i < len; i++){
        if (a[i] != '+'){
            b+=a[i];
        }
    }

    //sort the string 
    sort(b.begin(), b.end());
    int n = b.length();

    //print the string with + in between
    for(int j = 0; j<n; j++){
        cout << b[j];
        if(j != n -1){
            cout << '+';
        }
    }
    return 0;
}