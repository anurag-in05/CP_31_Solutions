#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vi vector<int> 
#define nl endl
using namespace std;


void solve(){
    ll n;cin>>n;
    vi v(n);for(auto &it:v) cin>>it;
    int ans=1;
    for(int k=1;k<n;k++){
        if(n%k==0){
            int gg = 0;
            for(int i=k;i<n;i++){
                gg = __gcd(gg,abs(v[i]-v[i-k]));
            }
            ans += (gg!=1);
        }
    }
    cout<<ans<<endl;
}

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--) solve();
    return 0;
}