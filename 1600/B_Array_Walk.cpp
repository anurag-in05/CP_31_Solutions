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
    int n,k,z;cin>>n>>k>>z;
    vector<ll> v(n); for(auto &it:v) cin>>it;
    ll pref=0;
    ll ans=0;
    ll best_pair = 0;
    for(int i=0;i<=k;i++){
        pref+=v[i];
        if( i+1 < n )best_pair = max(best_pair,v[i]+v[i+1]);
        // trying all z
        for(int L=0;L<=z;L++){
            int moves = i + 2*L;  // how we are calculating moves
            if(moves>k) break;
            ans = max(ans,pref + 1LL*best_pair*L);
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
