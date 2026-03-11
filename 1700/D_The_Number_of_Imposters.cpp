#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> adj;
vector<int> color;

bool dfs(int u, int &c0, int &c1){
    if(color[u] == 0) c0++;
    else c1++;
    for(auto [v,parity] : adj[u]){
        int expected = color[u] ^ parity;
        if(color[v] == -1){
            color[v] = expected;
            if(!dfs(v,c0,c1)) return false;
        }
        else if(color[v] != expected)
            return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        adj.assign(n+1,{});
        for(int i=0;i<m;i++){
            int a,b;
            string s;

            cin >> a >> b >> s;

            int k = (s == "imposter"); // FIX

            adj[a].push_back({b,k});
            adj[b].push_back({a,k});
        }
        color.assign(n+1,-1);
        int ans = 0;
        bool bad = false;
        for(int i=1;i<=n;i++){
            if(color[i] != -1) continue;
            color[i] = 0;
            int c0 = 0, c1 = 0;
            if(!dfs(i,c0,c1)){
                bad = true;
                break;
            }
            ans += max(c0,c1);
        }
        
        if(bad) cout << -1 << "\n";
        else cout << ans << "\n";
    }
}