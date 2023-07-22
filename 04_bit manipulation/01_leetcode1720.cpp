#include <bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    int n = encoded.size();
    vector<int> ans;
    ans.push_back(first);

    int temp = first;
    for(int i=0; i<n; i++){
        temp = encoded[i] ^ temp;
        ans.push_back(temp);
    }
    return ans;
}

int main()
{

        
    return 0;
}