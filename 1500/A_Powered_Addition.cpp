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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second

using namespace std;

void solve() {
    int n;cin>>n;
    vi v(n);for(auto &it:v)cin>>it;
    int ans=0;

    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            int diff = v[i] - v[i+1];
            int bits = 0;
            while((1LL << bits) <= diff) bits++;
            ans=max(ans,bits);
            v[i+1]=v[i];
        }
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