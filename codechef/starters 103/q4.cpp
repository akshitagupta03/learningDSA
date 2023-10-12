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
    ll len;
    cin >> len;
    
    string s;
    cin >> s;
    
    ll num;
    
    if(len == 1){
        cout << 8 << endl;
        return;
    }
    
    if(len == 2){
        num = 10*(s[len-2] - '0') + (s[len-1] - '0');
    }
    
    if(len >= 3){
        num = 100*(s[len-3] - '0') + 10*(s[len-2] - '0') + (s[len-1] - '0');
    }

    if(num % 8 == 0){
        cout << s << endl;
        return;
    }
    
    ll rem = num % 8;
    ll mod = 8 - rem;
    if((s[len-1] - '0') + mod < 10){
        num += mod;
    }
    else{
        num -= rem;
    }
    
    if(len >= 3){
        s[len-3] = (num/100)%10 + '0';
    }
    s[len-2] = (num/10)%10 + '0';
    s[len-1] = (num%10) + '0';
    cout << s << endl;
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
