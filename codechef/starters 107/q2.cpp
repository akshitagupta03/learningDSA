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
    
    string a;
    cin >> a;
    string b;
    cin >> b;
    
    ll chef = 0;
    ll chefina = 0;
    
    rep(i, 0, n)
    {
        if(a[i] == b[i]){
            continue;
        }
        else if(a[i] == 'R' && b[i] == 'S'){
            chef++;
        }
        else if(a[i] == 'R' && b[i] == 'P'){
            chefina++;
        }
        else if(a[i] == 'S' && b[i] == 'R'){
            chefina++;
        }
        else if(a[i] == 'S' && b[i] == 'P'){
            chef++;
        }
        else if(a[i] == 'P' && b[i] == 'R'){
            chef++;
        }
        else if(a[i] == 'P' && b[i] == 'S'){
            chefina++;
        }
    }
    
    if(chef > chefina){
        p(0);
    }
    else if(chef <= chefina){
        ll ans = (chefina-chef)/2;
        p(ans+1);
    }
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
