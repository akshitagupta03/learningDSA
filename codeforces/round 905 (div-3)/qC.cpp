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
    ll n, k;
    cin >> n >> k;

    vi a(n);
    ll even = 0;
    ll odd = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    ll count = 0;
    ll ans = INT_MAX;

    if(k == 4)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i] % 4 == 0)
            {
                if(ans > 0)
                {
                    ans = 0;
                }
            }
            if(even >= 2)
            {
                if(ans > 0)
                {
                    ans = 0;
                }
            }
            if(odd >= 1 && even >= 1)
            {
                if(ans > 1)
                {
                    ans = 1;
                }
            }
            if(odd >= 2 && even == 0)
            {
                if((4 - (a[i] % 4)) < 2)
                {
                    ans = 4 - a[i] % 4;
                }
                else{
                    if(ans > 2)
                    {
                        ans = 2;
                    }
                }
            }
            if(odd < 2 && even == 0)
            {
                ans = min(ans, 4 - (a[i] % 4));
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            count = a[i] % k;
            if(a[i] % k == 0)
            {
                p(0);
                return;
            }
            ans = min(ans, k-count);
        }
    }
    p(ans);
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
