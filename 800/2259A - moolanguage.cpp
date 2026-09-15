#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin>>t; 

    while(t--){

        //n fields and k fields per farm
        int n, k; cin >> n >> k; 

        string s; cin>> s; 

        int fields = 0; 
        int count = 0; 
        int a = 0;

        for(int i = 1; i <= n; i++){

            //if there's a 1, add to the fields count
            if(s[a] == '1'){
                fields++; 
            }
            a++;
            
            //if I have completed a farm, check if all fields are Nhoj's
            //if they are all Nhoj's, add to the total count. Reset the fields count for the new farm. 
            if(i%k == 0){
                if(fields == k){
                    count++; 
                }
                fields = 0; 
            }
        }
        cout << count << "\n"; 
    
    }
    return 0;

}