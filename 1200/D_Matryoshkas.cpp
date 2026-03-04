#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    map<int,int> m;
    while(n--){
        int x;cin>>x;
        m[x]++;
    }
    long long ans=0;
    // good thing learned 
    
    for(auto it:m){
        ans+=max(0,it.second-m[it.first-1]);
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