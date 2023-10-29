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
    ll n;
    cin >> n;

    vi a(n);
    unordered_map<ll, ll> m;
    rep(i, 0, n){
        cin >> a[i];
        m[a[i]]++;
    }

    if(m.size() == 1){
        py;
        return;
    }

    if(m.size() > 2){
        pn;
        return;
    }

    ll freq1, freq2;
    bool flag = true;
    for(auto i:m){
        freq1 = i.second;
        if(flag){
            freq2 = freq1;
            flag = false;
        }
    }

    if(freq1 == freq2 || abs(freq1-freq2) == 1){
        py;
        return;
    }
    pn;
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
