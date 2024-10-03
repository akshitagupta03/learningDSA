#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        for(int i=0; i<arr.size(); i++)
        {
            arr[i] = ((arr[i] % k) + k) % k;
            m[arr[i]]++;
        }

        for(auto i:m)
        {
            if(i.first == 0)
            {
                if(i.second % 2 != 0)
                {
                    return false;
                }
            }
            else if(i.second != m[k-i.first])
            {
                return false;
            }
        }
        return true;
    }
};

int main(){

    
    return 0;
}