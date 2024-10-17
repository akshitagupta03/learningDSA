#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int n = str.length();

        int maxIndex = n-1;
        int maxNum = str[n-1] - '0';

        int index1 = -1;
        int index2 = -1;

        for(int i=n-2; i>=0; i--)
        {
            if((str[i] - '0') > maxNum)
            {
                maxNum = str[i] - '0';
                maxIndex = i;
            }
            else if((str[i] - '0') < maxNum)
            {
                index1 = i;
                index2 = maxIndex;
            }
        }

        if(index1 != -1)
        {
            swap(str[index1], str[index2]);
        }
        return stoi(str);
    }
};

int main(){

    
    return 0;
}