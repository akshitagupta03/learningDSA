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

    rep(i, 0, n){
        cin >> a[i];
    }

    vi temp = a;
    sort(temp.begin(), temp.end());

    rep(i, 0, n){
        if(a[i] % 2 == 0 && temp[i] % 2 != 0){
            pn;
            return;
        }
        if(a[i] % 2 != 0 && temp[i] % 2 == 0){
            pn;
            return;
        }
    }
    py;
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
