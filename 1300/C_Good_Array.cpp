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
    mp m;
    vector<ll> v(n);for(auto &it:v) cin>>it,m[it]++;
    ll sum = accumulate(all(v),0LL); //
    vector<ll> ans;
    for(int i=0;i<n;i++){
        ll temp = sum-v[i];
        if(temp&1) continue;
        else {
            m[v[i]]--;
            if(m[temp/2] > 0){
                ans.pb(i+1);
            }
            m[v[i]]++;
        }
    }
    cout<<ans.size()<<endl;
    for(auto &it:ans) cout<<it<<" ";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}