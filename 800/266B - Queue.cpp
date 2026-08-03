#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //Get queue like 'BGBGB' (length n) and in t seconds Bs swap with Gs once. 
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;

    //in t time
    for(int i = 0; i < t; i++){

        //queue length n
        for(int j = 0; j < n; j++){

            //if boy before girl, they swap
            if(q[j] == 'B' && q[j+1]=='G'){
                char a = q[j];
                q[j] = q[j+1];
                q[j+1]=a;

                //boy has already swapped once, skip one value for j
                j++;
            }
        }
    }
    cout << q;
    return 0;
}