#include <iostream>
using namespace std;

int main() 
{
    //get n inputs with x++ or x-- or ++x or --x and return the value of x (initial is 0)
    int n; 
    cin >> n;
    int count = 0; 
    for(int i=0; i<n; i++){
        char a,b,c;

        //get the input of each line
        cin >> a >> b >> c;

        //check the middle char (it will always be + or -), then sum or extract
        if (b=='+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout << count;
    return 0;
}
