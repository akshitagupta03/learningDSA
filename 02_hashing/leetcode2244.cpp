#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        for(int i=0; i<tasks.size(); i++){
            m[tasks[i]]++;
        }

        int count = 0;
        for(auto i:m){
            if(i.second == 1){
                return -1;
            }
            if(i.second == 3 || i.second == 2){
                count++;
            }
            else{
                count += i.second/3 + ((i.second % 3)/2) + ((i.second % 3) % 2);
            }
        }
        return count;
    }
};

int main()
{

        
    return 0;
}
