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
    ll n,k;cin>>n>>k;
    vl v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(k==1){
        ll ans = *min_element(v.begin(),v.end());
        for(int i=1;i<n;i++){
            ans=min(ans,v[i]-v[i-1]);
        }
        cout<<ans<<endl;
        return;
    }
    else if(k>=3){
        cout<<0<<endl;
        return;
    }
    else{
        ll ans= LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            ll x = v[j]-v[i];
            ll upx = lower_bound(all(v),x) -v.begin();
            ans=min(ans,x);
            if(upx == 0){
                ans = min(ans, v[0] - x);
            }
            else if(upx == n){
                ans = min(ans, x - v[n-1]);
            }
            else{
                ans = min(ans, min(abs(v[upx] - x), abs(x - v[upx-1])));
            }
            }
        }
        cout<<ans<<endl;
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}