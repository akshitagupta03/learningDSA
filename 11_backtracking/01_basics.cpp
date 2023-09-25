/*
pcb

stack -> activation records

heap -> dynamic allocation

data  -> static variables

code 
*/


#include<bits/stdc++.h>
using namespace std;
 void func(int k)
 {
    if(k == 0){
        cout<<0<<endl;
        return;
    }
    if(k == 9)
    {
        return;
    }
    cout<<k+1<<endl;
    func(k-1);
    func(k+1);
    
 }
int main()
{
    func(5);
    return 0;
}