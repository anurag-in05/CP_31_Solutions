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
    vector<int> a(n),b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({a[i]-b[i],i+1});
    }
    sort(rall(v));
    vi ans;
    for(int i=0;i<n;i++){
        if(v[i].first==v[0].first) ans.pb(v[i].second);
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
    cout<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}