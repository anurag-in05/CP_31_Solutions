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
    ll n;cin>>n;
    ll total = (n*(n-1))/2;
    vl v(total);for(auto &it:v) cin>>it;
    sort(all(v));

    int i = 0;
    int c = 1;
    vector<ll> ans;
    while(i<total){
        ans.pb(v[i]);
        i+=(n-c);
        c++;
    }
    ans.pb(ans[n-2]);
    for(auto it:ans) cout<<it<<" ";
    cout<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}