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
    int n;cin>>n;
    vector<int> v(n);for(auto &it:v)cin>>it;
    vector<int> ans;
    ans.push_back(v[0]);
    bool decreasing = false;
    for(int i=1;i<n-1;i++){
        if( (v[i] <= v[i+1] && v[i] >= v[i-1] ) || ((v[i] >= v[i+1] && v[i] <= v[i-1] )) ){
            continue;
        }
        else{
            ans.pb(v[i]);
        }
    }
    ans.pb(v[n-1]);
    cout<<ans.size()<<nl;
    for(auto &it:ans) cout<<it<<" ";
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