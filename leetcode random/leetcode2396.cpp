#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convertBase(int num, int base)
    {
        long long int i = 1;
        int baseNum = 0;
        while(num > 0){
            int digit = num % base;
            baseNum += digit * i;
            i = i*10;
            num = num/base;
        }

        return baseNum;
    }

    bool isPalindrome(int num){
        int temp = num;
        long long int reversed = 0;

        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        if (num == reversed){
            return true;
        }
        else{
            return false;
        }
    }

    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            int num = convertBase(n, i);
            if(isPalindrome(num) == false){
                return false;
            }
        }
        return true;
    }
};

int main(){

  
}
