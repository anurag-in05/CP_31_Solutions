#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
using namespace std;

void solve() {
    ll n;cin>>n;
    vpl v(n);
    mp m,m2;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        m[v[i].first]++;
        m2[v[i].second]++;
    }
    ll ans= (1LL*n*(n-2)*(n-1))/6;
    for(auto it:v){
        ans -= (1LL*(m[it.first]-1)*(m2[it.second]-1));
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