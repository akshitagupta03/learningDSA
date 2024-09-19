#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve(int num, vector<string>& ans, string temp, int index)
    {
        if(index == num)
        {
            ans.push_back(temp);
            temp = "";
            return;
        }
        
        if(temp[temp.length()-1] == '1')
        {
            temp.push_back('0');
            solve(num, ans, temp, index+1);
            temp.pop_back();
        }
        if(temp[temp.length()-1] == '0')
        {
            temp.push_back('0');
            solve(num, ans, temp, index+1);
            temp.pop_back();
            temp.push_back('1');
            solve(num, ans, temp, index+1);
            temp.pop_back();
        }
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string> ans;
        
        solve(num, ans, "0", 1);
        solve(num, ans, "1", 1);
        return ans;
    }
};

int main(){

    
    return 0;
}