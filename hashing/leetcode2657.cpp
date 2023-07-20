#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> s;
        int count = 0;
        vector<int> ans;

        for(int i=0; i<A.size(); i++){
            if(A[i] == B[i]){
                count++;
            }
            else{
                if(s.find(A[i]) != s.end()){
                    count++;
                }
                else{
                    s.insert(A[i]);
                }
                if(s.find(B[i]) != s.end()){
                    count++;
                }
                else{
                    s.insert(B[i]);
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main()
{

        
    return 0;
}
