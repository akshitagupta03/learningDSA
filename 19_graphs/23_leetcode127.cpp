#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, 
    vector<string>& wordList)
    {
        int n = wordList.size();
        set<string> s(wordList.begin(), wordList.end());

        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        s.erase(beginWord);

        int ans = 0;
        while(!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            if(word == endWord)
            {
                ans = steps;
                break;
            }

            for(int i=0; i<word.length(); i++)
            {
                char original = word[i];
                for(char ch = 'a'; ch <= 'z'; ch++)
                {
                    word[i] = ch;
                    if(s.find(word) != s.end())
                    {
                        q.push({word, steps+1});
                        s.erase(word);
                    }
                }
                word[i] = original;
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}