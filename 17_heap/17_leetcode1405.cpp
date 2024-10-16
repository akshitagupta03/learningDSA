#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;
        string ans = "";

        if(a > 0) pq.push({a, 'a'});
        if(b > 0) pq.push({b, 'b'});
        if(c > 0) pq.push({c, 'c'});

        while(!pq.empty())
        {
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();

            if(freq == 0) break;

            if(ans.length() >= 2 && ans.back() == ch && 
            ans[ans.length()-2] == ch)
            {
                if(pq.empty()) break;

                char ch2 = pq.top().second;
                int freq2 = pq.top().first;
                pq.pop();

                ans += ch2;
                freq2--;

                if(freq2 > 0)
                {
                    pq.push({freq2, ch2});
                }
                pq.push({freq, ch});
            }
            else
            {
                ans += ch;
                freq--;
                if(freq > 0) pq.push({freq, ch});
            }
        }

        return ans;
    }
};

int main(){

    
    return 0;
}