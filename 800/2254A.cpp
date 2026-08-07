#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() 
{
    //get number test cases
    int n;
    cin >> n;

    //for each test case
    for (int i = 0; i < n; i++){

        //get number of tokens
        int a,b,c;
        cin >> a >> b >> c;
        int count = 0;

        //if two players have the same amount of tokens, the game ends. 
        if (a == b || b == c || a == c){
            cout << count << "\n";
        }

        //Player with most tokens gives to the one with fewest
        //Stop the loop when two players have the same number of tokens and return the number of moves.
        else{
            int arr[3] = {a,b,c};
            sort(arr, arr + 3);
            while (arr[2] != arr[1] && arr[0] != arr[1]){
                arr[2] --;
                arr[0] ++; 
                count++;
            }
            cout << count << "\n";
        }
        
    }
    return 0;
}