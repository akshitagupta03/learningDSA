#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int j = 0;
        string temp = "";
        for(int i=0; i<s.length(); i++)
        { 
            if(s[i] == 32 && temp != "")
            {
                v.push_back(temp);
                temp = "";
            }
            if(s[i] != 32)
            {
                temp += s[i];
            }
        }
        if(temp != "")
        {
            v.push_back(temp);
        }
        reverse(v.begin(), v.end());

        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }

        temp = "";
        for(int i=0; i<v.size(); i++)
        {
            temp += v[i];
            temp += " ";
        }
        temp.pop_back();
        return temp;
    }
};

int main(){

    
    return 0;
}