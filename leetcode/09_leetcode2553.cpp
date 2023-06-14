#include <bits/stdc++.h>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++){
        vector<int> temp;
        int num = nums[i];
        while(num > 0){
            temp.push_back(num%10);
            num = num/10;
        }
        for(int i=temp.size()-1; i>=0; --i){
            res.push_back(temp[i]);
        }
    }
    return res;
}

int main()
{

        
    return 0;
}