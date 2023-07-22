// most frequent even element

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int>m;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                m[nums[i]]++;
            }
        }

        int max = 0;
        int res = -1;

        for(auto i:m){
            if(i.second > max){
                max = i.second;
                res = i.first;
            }
        }

        return res;
    }
};

int main()
{

        
    return 0;
}
