#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> v(n+1);for(int i=1;i<=n;i++)cin>>v[i];
    vector<int> comp(n+1,0);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(comp[i]) continue;
        int j=i;
        while(comp[j]==0){
            comp[j]=i;
            j=v[j]; // j = v[j] and not v[i] 
            ans++;
        }
        ans--;
    }
    for(int i=1;i<n;i++){
        if(comp[i]==comp[i+1]){
            cout<<ans-1<<endl;
            return;
        }
    }
    cout<<ans+1<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}