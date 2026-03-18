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

// 00000 
// 00001 1 = 1 
// 00010 2 = 1 + 1
// 00011 1 = 1
// 00100 3 = 1 + 1 + 1
// 00101 1 = 1 
// 00110 2 = 1 + 1
// 00111 1 = 1 
// 01000 3 = 1 + 1 + 1
// 01001 1 = 1 
// 01010 2 = 1 + 1
// 01011 1 = 1 
// 01100 3 = 1 + 1 + 1
// 01101 1 = 1
// 01110 2 = 1 + 1
// 01111 1 = 1
// 10000 4 = 1 + 1 + 1 + 1

void solve() {
    ll n;cin>>n;
    ll ans=0;
    while(n){
        ans+=n;
        n/=2;
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}