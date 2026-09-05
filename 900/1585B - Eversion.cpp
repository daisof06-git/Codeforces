#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int t; cin >> t;

    for(int i = 0; i < t; i++){

        //get digits
        int n; cin >> n; 

        //get max and max position (get the last maximum)
        int m = 0, pos = 0;
        vector<int> arr(n);
        for(int j = 0; j < n; j++){
            cin>>arr[j]; 
            if(arr[j] >= m){
                m = arr[j];
                pos = j;
            }
        }

        //create count, actual and last
        int count = 0, act = 0, last = arr[n-1];

        //if the last number is different from the maximum, then at least one eversion must be done
        if(arr[n-1] != m){
            count++;

            //go from last to the position of the maximum
            for(int k = n - 1; k > pos; k--){

                //upload actual and compare with the last number of the array, which uploads to be the greater number
                act = arr[k];
                if(act > last){
                    count++;
                    last = act;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}