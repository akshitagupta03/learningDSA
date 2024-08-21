#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    int index = -1;
    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        index++;
        while(!s.empty() && s.top().first <= price)
        {
            s.pop();
        }
        int ans = index - (s.empty() ? -1 : s.top().second);
        s.push({price, index});

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main(){

    
    return 0;
}