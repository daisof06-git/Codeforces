#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //get lines with ( and ). See if switching the place of a substring ONCE converts it to a valid expression (equal num of ( and ) and opening and closing positions)
    // t is the num of lines and n the number of ( and ) in each line. (there's one n before each line) 
    int t;
    cin >> t;
    char b = '(';
    char c = ')';

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int countb = 0;
        int countc = 0;
        for (int i = 0; i<n; i++){
            if(a[i] == b){
                countb++;
            }
            if(a[i] == c){
                countc++;
            }
        }

        // if a valid expression can be created, the count of ( minus the count of ) will be 0. 
        if ((countb - countc) < 0 || (countb - countc) > 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES"<<"\n";
        }

    }
    return 0;
}
