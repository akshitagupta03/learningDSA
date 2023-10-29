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
    ll n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    string t;
    cin >> t;

    // check if s is already good
    bool flag = false;
    rep(i, 0, n-1){
        if(s[i] == s[i+1]){
            flag = true;
        }
    }

    if(flag == false){
        py;
        return;
    }

    // check if t is good
    rep(i, 0, m-1){
        if(t[i] == t[i+1]){
            pn;
            return;
        }
    }

    ll j=0;
    rep(i, 0, n-1){
        if(s[i] == s[i+1]){
            if(s[i] == t[0]){
                pn;
                return;
            }
            j = i;
            while(s[j] == s[j+1] && j<n-1){
                j++;
            }
            if(s[j] == t[m-1]){
                pn;
                return;
            }
        }
    }
    py;
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
