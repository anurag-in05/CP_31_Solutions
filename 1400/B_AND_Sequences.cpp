#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

const int N = 2e5 + 5;
ll fact[N];
const int mod = 1e9+7;

void solve() {
    int n;cin>>n;
    map<int,int> m;
    vector<int> v(n);for(auto &it:v)cin>>it,m[it]++;
    int alland = v[0];
    for(int i=1;i<n;i++) alland &= v[i];
    ll cnt = m[alland];
    if(cnt < 2){
        cout<<0<<nl;
        return;
    }
    ll ans = (cnt * (cnt - 1)) % mod;   
    ans = (ans * fact[n - 2]) % mod;
    cout << ans << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0]=1;
    for(int i=1;i<N;i++) fact[i]=(1LL*fact[i-1]*i)%mod;
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}