#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	    void permute(string& s, int index, set<string> &set)
        {
            // Base case
            if (index == s.length()-1)
            {
                set.insert(s);
                return;
            }
            
            for (int i = index; i<s.length(); i++) 
            {
                swap(s[index], s[i]);
                permute(s, index+1, set);
                swap(s[index], s[i]);
            }
        }
        
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    set<string> set;
		    permute(s, 0, set);
		    vector<string> ans(set.begin(), set.end());
		    
		    return ans;
		}
};

int main(){

    
    return 0;
}