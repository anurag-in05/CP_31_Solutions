#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    vi good(n+1,0);
    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;
        if(a!=-1) adj[a].pb(i);
        good[i]=(b==0);
    }
    vi ans;

    for(int i=1;i<=n;i++){
        if(good[i]) continue;
        bool check = true;
        for(auto it:adj[i]){
            if(good[it]) check=false;
        }
        if(check) ans.pb(i);
    }
    if(ans.size()==0) cout<<-1<<endl;
    else{
        for(auto it:ans){
            cout<<it<<" ";
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    while(t--) solve();
    return 0;
}