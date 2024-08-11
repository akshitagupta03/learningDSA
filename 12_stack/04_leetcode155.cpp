#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    MinStack() {
        
    }
    stack<long long> st;
    long long mini;
    
    void push(int value) {
        long long val = (long long)value;
        if(st.empty())
        {
            st.push(val);
            mini = val;
        }
        else if(val < mini)
        {
            st.push(long(2*val*1LL) - mini);
            mini = val;
        }
        else
        {
            st.push(val);
        }
    }
    
    void pop() {
        if(st.empty())
        {
            return;
        }
        long long num = st.top();
        st.pop();

        if(num < mini)
        {
            mini = 2*mini - num;
        }
    }
    
    int top() {
        if(st.empty())
        {
            return -1;
        }

        if(st.top() < mini)
        {
            return mini;
        }
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){

    
    return 0;
}