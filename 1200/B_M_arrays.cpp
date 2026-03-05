#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<int> v(m,0);
    while(n--){
        int x;cin>>x;
        v[x%m]++;
    }
    int ans=v[0]>0; //
    for(int i=1;i<=m/2;i++){ //
        if(v[i]||v[m-i]) ans+=(1+max(0,abs(v[i]-v[m-i])-1)); //
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}