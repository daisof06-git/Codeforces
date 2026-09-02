#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    //sum1 will equal to the sides of the bigger triangle (which I can get extending the hexagon)
    //sum2  will equal the number of triangles of side 1 that can fit into each of the triangles taken from the bigger one to get to the hexagon
    int sum1 = 0;
    int sum2 = 0; 
    for(int i = 0; i < 6; i++){
        int a = 0; 
        cin >> a; 

        //alternate sides of hexagon sum double to form the bigger triangle
        //alternate sides sum to sum2 squared (how many triangles of side 1 fit into them)
        if(i%2 == 1){
            sum1 += a*2; 
            sum2 += pow(a,2);
        }
        else sum1+= a; 
    }

    //t is the number of triangles of side 1 that fit into the bigger one
    //it equals the side of the bigger triangle squared
    int t = pow(sum1/3, 2); 
    cout << t-sum2 << "\n";
    return 0;

}