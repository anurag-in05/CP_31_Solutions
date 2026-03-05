#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
using namespace std;

void solve(){
    ll n;cin>>n;
    ll k;cin>>k;
    vl v(n);for(auto &it:v) cin>>it;
    if(k==1){
        for(int i=0;i<n-1;i++){
            if(v[i] > v[i+1] ){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}