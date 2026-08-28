#include <bits/stdc++.h>
using namespace std; 

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int t; cin >> t; 
    while(t--){
        long long a,b,c; cin >> a >> b >> c; 
        long long m; cin >> m; 
        long long abc = m / lcm(lcm(a,b),c);
        long long ab = m / lcm(a,b);
        long long ac = m / lcm(a,c);
        long long bc = m / lcm(b,c);
        
        long long counta = abc * 2 + (ab-abc) * 3 + (ac - abc) * 3 + (m/a - ab - ac + abc)* 6; 
        long long countb = abc * 2 + (ab-abc) * 3 + (bc - abc) * 3 + (m/b + abc - ab - bc)* 6; 
        long long countc = abc * 2 + (ac-abc) * 3 + (bc - abc) * 3 + (m/c + abc - ac - bc)* 6; 

        cout << counta << " " << countb << " " << countc << "\n";
    }
    return 0;

}