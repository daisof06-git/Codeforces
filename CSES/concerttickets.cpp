#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    //get number of tickets and of people
    int n,m; cin >> n >> m; 

    //create a multiset to store ticket prices
    multiset<int> tickets; 
    
    //get ticket prices
    for(int i = 0; i < n; i++){
        int price; cin >> price; 
        tickets.insert(price);
    }

    //for each person, search for the desired price using upper_bound, if there isn't, cout -1
    for(int i = 0; i < m; i++){
        int person; cin >> person;
        
        auto it = tickets.upper_bound(person); 
        if(it == tickets.begin()){
            cout << -1 << "\n"; 
        }
        else{
            it--; 
            cout << *it << "\n";
            tickets.erase(it); 
        }

    }
    return 0;

}