#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n % groupSize != 0) return false;

        map<int, int> m;
        for(int i=0; i<hand.size(); i++)
        {
            m[hand[i]]++;
        }

        int curr;
        while(!m.empty())
        {
            curr = m.begin()->first;
            for(int i=0; i<groupSize; i++)
            {
                if(m[curr+i] == 0) 
                {
                    return false;
                }
                m[curr+i]--;
                if(m[curr+i] == 0) 
                {
                    m.erase(curr+i);
                }
            }
        }
        return true;
    }
};

int main(){

    
    return 0;
}