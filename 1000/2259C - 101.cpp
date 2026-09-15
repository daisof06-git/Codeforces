#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; 
        vector <int> nums(n); 
        for(int i = 0; i < n; i++) cin >> nums[i]; 

        //create variables for positions and for getting them
        int posl = -1;
        int posr = -1;  
        bool l = false; 
        bool r = false; 

        //get first 1 or -1 position and last
        for(int i = 0; i < n; i++){
            if((nums[i] == 1 || nums[i] == -1) && l == false){
                posl = i; 
                l = true; 
            }
            if((nums[n-1-i] == 1 || nums[n-1-i] == -1) && r == false){
                posr = n - 1 - i; 
                r = true; 
            }
        }

        //if there aren't 1s or -1s, cout it as it is (0s)
        if(l == false || r == false){
            for(int i = 0; i < n; i++){
                cout << nums[i] << " ";
            }
        }

        //else, for each side position cout a 1, for each -1(not in side position) cout a 0, and cout the rest as they are 
        else{
            for(int i = 0; i < n; i++){
                if(i == posl || i == posr){
                    cout << 1 << " ";
                }
                else if(nums[i] == -1){
                    cout << 0 << " ";
                }
                else{
                    cout << nums[i] << " "; 
                }
            }
        }
        cout << "\n";
    }
    return 0;

}