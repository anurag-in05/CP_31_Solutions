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
    int n,k;cin>>n>>k;
    int ans=1;
    if(n<=k){
        cout<<1<<nl;
        return;
    }
    if(k==1){
        cout<<n<<nl;
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i<=k) ans = max(ans,i); 
            if(n/i<=k) ans=max(ans,n/i);
        }
    }
    cout<<n/ans<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}