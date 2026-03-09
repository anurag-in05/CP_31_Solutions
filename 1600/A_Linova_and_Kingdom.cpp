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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

using namespace std;
// changed this code 
void dfs1(int node, int parent, vector<vector<int>>& adj,vector<int>& depth, vector<int>& subtree_size,vector<int> &v){
    for(int child : adj[node]){
        if(child == parent) continue;
        depth[child] = depth[node] + 1;
        dfs1(child, node, adj, depth, subtree_size,v);
        subtree_size[node] += subtree_size[child]+1;
    }
    v[node] = depth[node] - subtree_size[node];  
}

void solve() {
    int n,k;cin>>n>>k;
    vector<int> depth(n,0),subtree_size(n,0); 
    vector<vector<int>> adj(n);
    vector<int> v(n,0);
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs1(0,-1,adj,depth,subtree_size,v);
    sort(rall(v));
    cout<<accumulate(v.begin(),v.begin()+k,0LL)<<endl;
    // vector<vector<int>> s;
    // for(int i=1;i<=n;i++){
    //     s.pb({-1*depth[i],subtree_size[i],i});
    // }
    // sort(all(s));
    // vector<bool> is_industry(n+1,false);
    // for(int i=0;i<k;i++){
    //     is_industry[s[i][2]]=true;
    // }
    // // we need to calculate number of children which are industry for a tourist place;
    // dfs2(1,-1,adj,is_industry);
    // cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}