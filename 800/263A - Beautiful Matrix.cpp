#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    //get a 5*5 matrix with 0s and one 1. Return the minimal number of neighbor rows/columns switch to get the 1 to the middle. 
    //create matrix and get input for each place
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> matrix[i][j];
        }
    }

    int count = 0; 
    int row = 0;
    int column = 0;

    //get the position of the number 1
    for(int r = 0; r < 5; r++){
        for(int c = 0; c < 5; c++){
            if (matrix[r][c] == 1){
                row = r;
                column = c;
            }
        }
    }

    //the minimal number of moves is the sum of the number of rows and number of columns that must be switched
    cout << abs(row - 2) + abs(column - 2); 

    return 0;
}
