#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vi>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
#define pop pop_back
using namespace std;

void dfs(int node,int prev,vi &size,vvi &adj){
    size[node]=1;
    for(auto it:adj[node]){
        if(it==prev) continue;
        dfs(it,node,size,adj);
        size[node]+=size[it];
    }
}
void solve(){
    ll n;cin>>n;
    vvi adj(n);
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        adj[a].pb(b);
        adj[b].pb(a);
    } 
    //
    if(n&1){
        cout<<-1<<nl;
        return;
    }
    vi size(n,0);
    dfs(0,-1,size,adj);
    
    int ans=0;
    for(int i=1;i<n;i++) if(size[i]%2==0) ans++;
    cout<<ans<<nl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    solve();
    return 0;
}