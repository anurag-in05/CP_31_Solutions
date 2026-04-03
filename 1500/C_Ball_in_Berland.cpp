#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define mp map<ll,ll>
using namespace std;

void solve() {
    int a,b,k;
    cin>>a>>b>>k;
    vi va(k);for(auto &it:va)cin>>it;
    vi vb(k);for(auto &it:vb)cin>>it;
    map<int,int> ma,mb;
    for(int i=0;i<k;i++){
        ma[va[i]]++;
        mb[vb[i]]++;
    }
    ll ans=0;
    for(int i=0;i<k;i++){
        int ways = k-ma[va[i]]-mb[vb[i]]+1;
        ans+=ways;
    }
    cout<<ans/2LL<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}