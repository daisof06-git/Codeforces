#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n; cin >> n; 
    int m = 50; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        m = min(m, arr[i]);
    }

    int r = count(arr, arr + n, m); 
    cout << (r <= n ? "Alice": "Bob") << "\n";

    return 0;

}