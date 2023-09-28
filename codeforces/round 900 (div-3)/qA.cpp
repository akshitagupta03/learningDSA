#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;
 
#define vi vector<ll>
#define ll long long
#define rep(x, start, end) for(ll x = start; x < end; x++)
#define rrep(x, start, end) for(ll x = start; x >= end; x--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl
 
int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;
        
        unordered_set<ll> s;
        rep(i, 0, n){
            ll a;
            cin >> a;
            s.insert(a);
        }

        if(s.find(k) != s.end()){
            py;
        }
        else{
            pn;
        }
    }
    
    return 0;
}