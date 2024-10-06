#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
    public:
        stack<int> s;
        void sort();
};

void SortedStack :: sort()
{
    //Your code here
    if(s.empty())
    {
        return;
    }

    int x = s.top();
    s.pop();
    
    sort();
    
    stack<int> temp;
    while(!s.empty() && s.top() > x)
    {
        temp.push(s.top());
        s.pop();
    }
    
    s.push(x);
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}

int main(){

    
    return 0;
}