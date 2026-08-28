#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    //get test cases
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        //get length
        int l; cin >> l;

        //set last, centimeters and actual variables. Create an array of numbers for each test. 
        int last = -1, cen = 1, act = -1;
        vector<int> arr(l);

        //get input
        for(int j = 0; j < l; j++){
            cin >> arr[j];
        } 

        //get the centimeters
        for(int k = 0; k < l; k++){
            act = arr[k];
            if(act == 0){
                if(last == 0){
                    cen = -1; 
                    break;
                }
                last = act;
            }
            else if(act == 1){
                if (last == 1){
                    cen += 5;
                }
                else{
                    cen++;
                }
                last = act;
            }
        }
        cout << cen << "\n";
    }

    return 0;
}
