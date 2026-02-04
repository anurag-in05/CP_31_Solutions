#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll> 
using namespace std; 

void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    vl v(n);for(auto &it:v)cin>>it;
    ll ans=0, cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]<=q) cnt++;
        else cnt=0;
        ans += max(0LL,cnt-k+1); // number of subarrays ending at that point
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}