#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;

    //for each test case
    for(int i = 0; i < t; i++){

        //initialize count
        int count = 0;
        int a,b; cin >> a >> b;
        int v = 0;
        if (a < b) v = b- a;
        else v = a - b;

        //see for each type of button, how many times it has to be pressed
        while(v >= 5){
            count+= v/5;
            v -= 5*(v/5);
        }
        while(v >= 2){ 
            count+= v/2;
            v -= 2*(v/2);
        }
        while (v >= 1){              
            v-= 1;
            count++;
        }
        cout << count << "\n";
    } 
    return 0;
}