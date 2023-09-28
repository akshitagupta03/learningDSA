#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        float l, tor, hare;
        cin >> l >> tor >> hare;
        
        float timeTor = ceil(l/tor);
        float timeHare = ceil(l/hare);
        
        if(timeHare < timeTor){
            cout << timeTor - timeHare - 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}