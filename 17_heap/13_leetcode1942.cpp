#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        priority_queue<int, vector<int>, greater<int>> chairs;
        vector<pair<pair<int, int>, int>> vec;

        int n = times.size();
        for(int i=0; i<n; i++)
        {
            vec.push_back({{times[i][0], 1}, i});
            vec.push_back({{times[i][1], -1}, i});
        } 
        sort(vec.begin(), vec.end());

        vector<int> assigned(n, -1);
        for(int i=0; i<n; i++)
        {
            chairs.push(i);
        }

        for(int i=0; i<vec.size(); i++)
        {
            int arrival = vec[i].first.first;
            int type = vec[i].first.second;
            int person = vec[i].second;

            if(person == targetFriend && type == 1)
            {
                return chairs.top();
            }
            else if(type == 1)
            {
                assigned[person] = chairs.top();
                chairs.pop();
            }
            else
            {
                chairs.push(assigned[person]);
                assigned[person] = -1;
            }
        }
        return -1;
    }
};

int main(){

    
    return 0;
}