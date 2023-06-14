#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int count=0;
    int sum=0;
    
    for(int i=0; i<costs.size(); i++){
        sum += costs[i];
        if(sum <= coins)
            count++;
        else
            break;
    }
    return count;
}

int main()
{

        
    return 0;
}