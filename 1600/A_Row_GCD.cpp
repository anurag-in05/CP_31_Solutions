#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<ll> a(n);for(auto &it:a) cin>>it;
    vector<ll> b(m);for(auto &it:b) cin>>it;
    ll g=0;
    for(int i=1;i<n;i++) g = gcd(g,abs(a[i]-a[0]));
    for(int i=0;i<m;i++){
        cout<<gcd(g,b[i]+a[0])<<" ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;t = 1;
    while(t--) solve();
    return 0;
}