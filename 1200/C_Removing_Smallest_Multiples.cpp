#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v(n);
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){ 
            if(s[j-1]=='1') break;
            if(s[j-1]=='0' && v[j-1]==0){
                ans+=i; 
                v[j-1] = 1;
            }
        }
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