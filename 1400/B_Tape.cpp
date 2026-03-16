#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

void solve() {
    ll n;cin>>n;
    ll m,k;cin>>m>>k;
    vector<ll> v(n);
    for(auto &it:v){
        cin>>it;
    }
    vector<ll> temp;
    for(ll i=1;i<n;i++){
        temp.push_back(v[i]-v[i-1]-1);
    } 
    sort(temp.begin(),temp.end());
    ll ans=n;
    for(ll i=0;i<n-k;i++){
        ans+=temp[i];
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}