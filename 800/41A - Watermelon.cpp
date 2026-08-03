#include <iostream>
using namespace std;
 
int main() 
{
    int w;
    std::cin >> w;

    //use modulo to check whether it is a multiple (also, the number 2 can't be divided in two even numbers
    if (w % 2 == 1 || w == 2){
       std::cout << "NO\n";
    }
    else{
        std::cout << "YES\n";
    }
    return 0;
}
