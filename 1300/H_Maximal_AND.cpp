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

void solve() {
    int n,k;cin>>n>>k;
    vl v(n);for(auto &it:v) cin>>it;
    int ans=0;
    for(int bit=30;bit>=0;bit--){
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if(v[i]&(1LL<<bit))cnt++;
        }
        int need=n-cnt;
        if(need<=k) {
            k-=need;
            ans|=(1LL<<bit);
        }
    }
    cout<<ans<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}