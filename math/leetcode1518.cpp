#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int bottles = 0;

        while(numBottles >= numExchange){
            ans += (numBottles/numExchange);
            bottles = numBottles % numExchange;
            numBottles = numBottles/numExchange + bottles;
        }
        return ans;
    }
};

int main()
{

        
    return 0;
}
