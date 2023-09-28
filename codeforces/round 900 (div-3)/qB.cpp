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
        ll n;
        cin >> n;
         
        vector<ll> arr(n);
        arr[0] = 1;
        rep(i, 2, n){
            arr[1] = 3;
            if(i % 2 == 0){
                arr[i] = arr[i-1]+2;
            }
            arr[i] = arr[i-1]+4;
        }

        parr(arr);
    }
    
    return 0;
}