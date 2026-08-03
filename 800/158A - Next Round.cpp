#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int kth = arr[k-1];
    
    int count = 0;
    if(kth >= 0){
        for(int j=0; j<n; j++){
            if (arr[j] >= kth && arr[j]!=0){
                count++;
            }
        }
        cout << count;
    }
    else{
        cout << count;
    }
    return 0;
}