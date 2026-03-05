#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vi vector<int> 
#define nl endl
using namespace std;

// pigeon hole principle 

void solve(){
    ll n,m;cin>>n>>m;
    vl v(n);for(auto &it:v) cin>>it;
    if(n>m){
        cout<<0<<endl;
        return;
    }
    long long ans=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans *= (abs(v[i]-v[j])%m);
            ans %= m;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}