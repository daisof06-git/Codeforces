#include <bits/stdc++.h>
using namespace std; 

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n; cin >> n; 
    int minx = 0; 
    int miny = 0;
    int maxx = 0;
    int maxy = 0; 
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y; 
        if(i == 0){
            minx = x; 
            miny =y; 
            maxx = x; 
            maxy = y; 
        }
        minx = min(x, minx);
        miny = min(y, miny);
        maxx = max(x, maxx);
        maxy = max(y, maxy);
    }
    int p = ((maxx + 1) - (minx - 1))*2 + ((maxy + 1) - (miny - 1))*2;

    cout << p << "\n"; 
    return 0;

}