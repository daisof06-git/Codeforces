#include <iostream>
using namespace std;
 
int main() 
{
    int w;
    std::cin >> w;
 
    if (w % 2 == 1 || w == 2){
       std::cout << "NO\n";
    }
    else{
        std::cout << "YES\n";
    }
    return 0;
}
