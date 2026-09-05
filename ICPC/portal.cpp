#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    while(t--){
        int n, x, y; cin >> n >> x >> y; 
        vector<int>out;
        vector<int>ins;  
        int mi = n + 1;
        int pos = n; 
        for(int i = 0; i < n; i++){
            int num; cin >> num; 
            if( i < x || i >= y){
                out.push_back(num);
            }
            else{
                ins.push_back(num);
                if(num < mi){
                    mi = num; 
                    pos = i - x; 
                }
            }
        }
        rotate(ins.begin(), ins.begin() + pos, ins.end());
        int apos = 0; 
        while(apos < out.size() && out[apos] < mi){
            apos++; 
        }
        out.insert(out.begin() + apos, ins.begin(), ins.end());
        for(int i = 0; i < n; i++) cout << out[i] << " "; 
        
        cout << endl;
    }
    return 0;

}