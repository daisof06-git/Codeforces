#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        
        //create a pair(for each line) that counts 1 in even positions and 1s in odd positions 
        pair <int,int> a = {0,0};
        pair <int,int> b = {0,0}; 

        string num1; cin >> num1;
        string num2; cin >> num2; 

        for(int i=0; i<n; i++){

            //if the number is one, add it to the corresponding position counter
            if(num1[i] == '1'){
                if(i%2 == 0){
                    a.first++;
                }
                else{
                    a.second++;
                }
            }

        }

        for(int i=0; i<n; i++){

            if(num2[i] == '1'){
                if(i%2 == 0){
                    b.first++;
                }
                else{
                    b.second++;
                }
            }

        }

        //if counts match, yes. 
        if(a == b){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}