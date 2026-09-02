#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 

    //m is minimum num of rocks, it can be up to 50
    int m = 50; 
    int arr[n];

    //for each pile, update the min number of rocks
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m = min(m, arr[i]);
    }
    
    //count the number of piles with minimum number
    int r = count(arr, arr + n, m); 

    //if the number of piles with min rocks is less or equal to n/2, Alice wins
    cout << (r <= n/2 ? "Alice": "Bob") << "\n";

    return 0;

}