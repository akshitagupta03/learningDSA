#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int sumSquare(int num){
        int sum = 0;
        while(num > 0){
            sum += (num % 10) * (num % 10);
            num = num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;

        while(n != 1 && !s.count(n)){
            s.insert(n);
            n = sumSquare(n);
        }
        return (n == 1);
    }
};

int main()
{

        
    return 0;
}
