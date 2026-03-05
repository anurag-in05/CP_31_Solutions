#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
#define yn(f) f ? cout<<"YES\n" : cout<<"NO\n"
#define syn(f) f ? cout<<"Yes\n" : cout<<"No\n"

using namespace std;

void dfs(int i,int &len,bool &cycle,vector<vector<int>> &adj,vector<int> &vis){
    vis[i]=1;
    len++;
    if(adj[i].size()<2) cycle = false; // ? 
    for(auto it:adj[i]){
        if(vis[it]) continue;
        dfs(it,len,cycle,adj,vis);
    }
}
void solve() {
    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        adj[x].pb(i);
        adj[i].pb(x);
    }
    // how in dfs we will differentiate between components
    vector<int> vis(n+1,0);
    int mx=0,c=0,b=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int len=0;
            bool cycle = true;
            dfs(i,len,cycle,adj,vis);
            if(len>2 && cycle) c++;
            else b++;
            mx++;
        }
    }
    cout<<c + (b>0?1:0) <<" "<<mx<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}