#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitNum(int num) {
        vector<int> digits;
        while(num){
            digits.push_back(num % 10);
            num = num/10;
        }
        sort(digits.begin(), digits.end());

        int temp = 0;
        for(int i=0; i<digits.size(); i++){
            temp = temp*10;
            temp += digits[i];
        }

        int num1 = 0, num2 = 0, i=1;
        while(temp){
            num1 += (temp%10)*i;
            temp = temp/10;

            num2 += (temp%10)*i;
            temp = temp/10;

            i = i*10;
        }

        return num1 + num2;
    }
};

int main()
{

        
    return 0;
}
