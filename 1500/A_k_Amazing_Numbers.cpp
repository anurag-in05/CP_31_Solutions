#include <bits/stdc++.h>
#define ll long long
#define nl endl
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;cin>>n;
    vector<vector<int>> v(n+1);
    for(int i=1;i<=n;i++) v[i].push_back(0);
    for(int j=0;j<n;j++){
        int a;cin>>a;
        v[a].push_back(j+1);
    }
    for(int i=1;i<=n;i++) v[i].push_back(n+1);

    vector<int> ans(n,INT_MAX);
    for(int i=1;i<=n;i++){
        int diff = 0;
        for(int j=1;j<v[i].size();j++){
            diff=max(diff,v[i][j]-v[i][j-1]);
        }
        ans[diff-1]=min(ans[diff-1],i);
    }
    int prev=INT_MAX;
    for(int i=0;i<n;i++){
        if( ans[i]==INT_MAX && prev==INT_MAX) ans[i]=-1;
        else{
            prev=min(prev,ans[i]);
            ans[i]=prev;
        }
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}