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
    int m;cin>>m;
    vector<int> v(n+1,n+1);
    for(int i=0;i<m;i++){
        int a, b;cin>>a>>b;
        if(a>b) swap(a,b);
        v[a]=min(v[a],b);
    }
    ll ans=1;
    // chudap 
    for(int i=n-1;i>=1;i--){
        v[i]=min(v[i],v[i+1]);
        ans+=(v[i]-i);
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