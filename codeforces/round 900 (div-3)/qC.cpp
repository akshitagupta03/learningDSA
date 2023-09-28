#include <bits/stdc++.h>
#include <map>
#include <set>
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
        ll n, k, x;
        cin >> n >> k >> x;
         
        ll sum1 = (k*(k+1))/2;
        ll sum2 = ((2*n-k+1)*k)/2;

        if(sum1 > x || sum2 < x){
            pn;
        }
        else{
            py;
        }
    }
    
    return 0;
}