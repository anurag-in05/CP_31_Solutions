#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vector<int>>
#define pb push_back
using namespace std;

ll c=0;
void dfs(int node,int prev,int col,vvi &adj,vi &color){
    color[node]=col;
    if(col==0) c++;
    for(auto it:adj[node]){
        if(it==prev) continue;
        dfs(it,node,1-col,adj,color);
    }
}
void solve() {
    int n;cin>>n;
    vvi adj(n+1);
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    c=0;
    vector<int> color(n+1,-1);
    dfs(1,-1,0,adj,color);
    cout<<c*(n-c) - (n-1)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    while(t--) solve();
    return 0;
}