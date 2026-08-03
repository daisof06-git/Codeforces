#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int len = s.length();
    string a = "";
    for (int i = 0; i < len; i++){
        if (a.find(s[i]) == string::npos){
            a += s[i];
        }
    }
    int count = a.length();
    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}