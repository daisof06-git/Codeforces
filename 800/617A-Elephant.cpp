#include <iostream>
using namespace std;

int main() 
{
    //get a number and calculate the min num of steps to get there (steps can be 5,4,3,2,1 places)
    int n;
    cin >> n;
    int steps = 0;
    while(n > 0){

        while(n >=5){
            n -= 5;
            steps ++;
        }
        while(n >=4){
            n -= 4;
            steps ++;
        }
        while(n >=3){
            n -= 3;
            steps ++;
        }
        while(n >=2){
            n -= 2;
            steps ++;
        }
        while(n >=1){
            n -= 1;
            steps ++;
        }
    }
    cout << steps;
    return 0;
}