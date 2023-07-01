#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        
        for(int i=0; i<l.size(); i++){
            vector<int> temp;
            for(int j=l[i]; j<=r[i]; j++){
                temp.push_back(nums[j]);
            }

            sort(temp.begin(), temp.end());
            int a = temp[1] - temp[0];
            bool flag = true;

            for(int k=2; k<temp.size(); k++){
                if(temp[k] - temp[k-1] != a){
                    flag = false;
                    break;
                }
            }
            ans.push_back(flag);
        }

        return ans;
    }
};

int main()
{

        
    return 0;
}
