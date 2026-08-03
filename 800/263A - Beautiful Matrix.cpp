#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> matrix[i][j];
        }
    }

    int count = 0; 
    int row = 0;
    int column = 0;

    for(int r = 0; r < 5; r++){
        for(int c = 0; c < 5; c++){
            if (matrix[r][c] == 1){
                row = r;
                column = c;
            }
        }
    }
    cout << abs(row - 2) + abs(column - 2); 

    return 0;
}