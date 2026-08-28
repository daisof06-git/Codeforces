#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t;

    for(int i=0; i<t; i++){
        int n, m; cin >> n >> m;

        vector <char> f(n); 
        for(int k=0; k<n; k++){
            string a; 
            cin >> a;
            f[k] = a[0];
        }
        int count = 0;

        for(int j=0; j<m; j++){
            bool t = true;
            string a; 
            cin >> a; 
            int len = a.length();


            for(int c=0; c<len; c++){
                auto place = find(f.begin(), f.end(),tolower(a[c]));
                if (place == f.end()){
                    t = false;
                    break; 
                }
            }
            if (t == true){
                count++;
            }
        }
        if(count == m){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
    return 0;
}