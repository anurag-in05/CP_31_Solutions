#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll> 
using namespace std;

void solve(){
    int n;
    cin>>n;
    vl a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;

    vl ca(2*n+1,0),cb(2*n+1,0);
    ll cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else{
            ca[a[i]]=max(ca[a[i]],cnt);
            cnt=1;
        }
    }
    ca[a[n-1]]=max(ca[a[n-1]],cnt);
    cnt=1;
    for(int i=0;i<n-1;i++){
        if(b[i]==b[i+1]){
            cnt++;
        }
        else{
            cb[b[i]]=max(cb[b[i]],cnt);
            cnt=1;
        }
    }
    cb[b[n-1]]=max(cb[b[n-1]],cnt);
    ll ans=1;
    for(int i=0;i<2*n+1;i++){
        ans=max(ans,ca[i]+cb[i]);
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