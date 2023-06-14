#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> v1, v2, v3;
    
    for(auto i:nums){
        if(i<0) v1.push_back(i);
        else v2.push_back(i);
    }
    for(int i=0;i<v1.size();i++){
        v3.push_back(v2[i]);
        v3.push_back(v1[i]);
    }
    return v3;
}

int main()
{

        
    return 0;
}