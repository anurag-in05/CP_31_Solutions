#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
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
int MAXA = 1e6;

void solve() {
    int n;cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(auto &it:v){
        cin>>it;
        mp[it]++;
    }
    ll ans=0;
    for(auto it:mp){ // good implementation 
        ll x = it.first;
        ans += 1LL*mp[x]*(mp[x]-1)*(mp[x]-2);
        for(long long b=2; x*b*b<=MAXA; b++){
            long long y = x*b;
            long long z = x*b*b;
            if(mp.count(y) && mp.count(z)){
                ans += 1LL*mp[x]*mp[y]*mp[z];
            }
        }
    }
    cout<<ans<<"\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}