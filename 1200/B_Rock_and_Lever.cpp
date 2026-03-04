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

// trick is 
// we need to check the first set bit

void solve() {
    int n;cin>>n;
    vi v(n);for(auto &it:v)cin>>it;
    ll ans=0;
    for(int i=29;i>=0;i--){
        ll cnt=0;
        for(int j=0;j<n;j++){ 
            if(v[j]&(1<<i)){ 
                cnt++;
                v[j]=0;
            } // we cant reuse
        }
        ans+=((cnt*(cnt-1))/2);
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