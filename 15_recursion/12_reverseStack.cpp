#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void insertAtBottom(stack<int>& st, int x)
    {
        if(st.empty())
        {
            st.push(x);
        }
        else
        {
            int num = st.top();
            st.pop();
            
            insertAtBottom(st, x);
            st.push(num);
        }
    }
    void Reverse(stack<int> &st){
        if(st.empty())
        {
            return;
        }
        else
        {
            int x = st.top();
            st.pop();
            
            Reverse(st);
            insertAtBottom(st, x);
        }
    }
};

int main(){

    
    return 0;
}