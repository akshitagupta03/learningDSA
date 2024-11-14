#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool parseBoolExpr(string s){
        stack<char> st;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            if(s[i] == '(' || s[i] == ',')
            {
                continue;
            }
            if(s[i] == 't' || s[i] == 'f' || s[i] == '!' || 
            s[i] == '&' || s[i] == '|') 
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                bool hasTrue = false;
                bool hasFalse = false;

                while(!st.empty() && st.top() != '&' && st.top() != '|' &&
                st.top() != '!')
                {
                    char ch = st.top();
                    st.pop();

                    if(ch == 't') hasTrue = true;
                    else if(ch == 'f') hasFalse = true;
                }

                char op = st.top();
                st.pop();

                if(op == '!')
                {
                    st.push(hasTrue ? 'f' : 't');
                }
                else if(op == '&')
                {
                    st.push(hasFalse ? 'f' : 't');
                }
                else
                {
                    st.push(hasTrue ? 't' : 'f');
                }
            }
        }

        return st.top() == 't';
    }
};

int main(){

    
    return 0;
}