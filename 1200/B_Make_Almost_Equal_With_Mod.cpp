#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define yn(f) f ? cout<<"YES\n" : cout<<"NO\n"
#define syn(f) f ? cout<<"Yes\n" : cout<<"No\n"

using namespace std;

// bits 
// ek aisi bit dhundlo jisme ek set ho aur baaki unset 
// start from 0


void solve() {
    int n;cin>>n;
    vector<ll> v(n);for(auto &it:v) cin>>it;
    for(int i=0;i<64;i++){
        bool b1=false,b2=false;
        for(auto it:v){
            if((it>>i)&1) b1=true;
            else b2=true;
        }
        if(b1 & b2){
            cout<<(1LL<<(i+1))<<nl;
            return;
        }
    }    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}