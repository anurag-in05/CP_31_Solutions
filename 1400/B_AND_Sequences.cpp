#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

const int N = 20005;
ll fact[N];
const int mod = 1e9+7;

void solve() {
    int n;cin>>n;
    map<int,int> m;
    vector<int> v(n);for(auto &it:v)cin>>it,m[it]++;
    int alland = v[0];
    for(int i=1;i<n;i++) alland &= v[i];
    
    cout<<((m[alland]*(m[alland]-1))%mod)*fact[n-2]%mod<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0]=1;
    for(int i=1;i<=N;i++) fact[i]=(1LL*fact[i-1]*i)%mod;

    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}