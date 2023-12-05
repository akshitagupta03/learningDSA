#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define rep(x, start, end) for(ll x = start; x < end; x++)
#define rrep(x, start, end) for(ll x = start; x >= end; x--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

//-------------------------- Debug -------------------------/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
void solve()
{
    string s;
    cin >> s;

    ll count = 1;
    if(s[0] == '0')
    {
        count += 9;
    }
    else
    {
        count += (s[0] - '0') - 1;
    }

    for(int i=1; i<s.length(); i++)
    {
        ll dist = abs(s[i] - s[i-1]);
        if(s[i] == '0')
        {
            dist = s[i] - s[i-1] + 10;
        }
        if(s[i-1] == '0')
        {
            dist = s[i-1] - s[i] + 10;
        }
        if(s[i-1] == '0' && s[i] == '0')
        {
            dist = 0;
        }
        count += dist + 1;
    }
    p(count);
}
 
//--------------------------- MAIN -------------------------/
int main() {
    ios_base::sync_with_stdio(false); // to make input output faster
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
