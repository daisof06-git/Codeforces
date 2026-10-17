#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

bool isvocal(char c){
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return true; 
    }
    return false; 
}

string newword(string word, int len, int pos){
    string newword = ""; 
    for(int i = 0; i < len; i++){
        if(i <= pos || i > pos+4){
            newword+= word[i]; 
        }
    }
    return newword; 
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    string word; cin >> word; 
    int len = word.length();
    int count = 0; 
    int pos = 0; 
    int end = -1;

    for(int i = 0; i < len - 4; i++){
        if(isvocal(word[i]) && word[i+1] == 'G' && word[i+2] == 'A' && word[i+3] == 'S' && word[i] == word[i+4]){
            if(i!=end){
                count++; 
                pos = i; 
            }
            end = i + 4; 
        }
    }

    if(count > 1){
        cout << '+' << "\n";
    }
    else if(count == 0){
        cout << '-' << "\n";
    }
    else{
        cout << newword(word, len, pos) << "\n"; 
    }
    
    return 0;

}