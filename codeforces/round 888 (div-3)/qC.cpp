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
    unordered_map<ll, ll> m;

    rep(i, 0, n){
        cin >> a[i];
        m[a[i]]++;
    }

    ll freqi = m[a[0]];
    ll freql = m[a[n-1]];
    if(freqi < k || freql < k){
        pn;
        return;
    }

    if(a[0] == a[n-1]){
        py;
        return;
    }

    unordered_map<ll, ll> m2;
    int index = -1;
    int count = 0;

    rep(i, 0, n){
        if(a[i] == a[0]){
            m2[a[i]]++;
            count++;
        }
        if(count == k){
            index = i;
            // cout << "Index: " << index << endl;
            break;
        }
    }

    rep(i, index+1, n){
        if(a[i] == a[n-1]){
            m2[a[n-1]]++;
        }
    }

    if(m2[a[n-1]] >= k){
        py;
        return;
    }
    pn;
}
 
//--------------------------- MAIN -------------------------/
int main() {
    #ifndef ONLINE_JUDGE
        // freopen("Error.txt", "w", stderr); // to print debug into error.txt file
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif
 
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
