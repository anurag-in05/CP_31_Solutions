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
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
const int mod = 1e9+7;
using namespace std;

bool bfs(int n,vector<int>& col,vvl &graph){
    queue<int>q;
    q.push(n);
    col[n]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:graph[node]){
            if(col[it]==col[node]) return false;
            else if(col[it]==-1){
                col[it]=col[node]^1;
                q.push(it);
            }
        }
    }
    return true;
}
void solve() {
    int n;cin>>n;
    vector<int> col(n,-1),m(n);
    vvl graph(n);
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        m[a]++;
        m[b]++;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    bool x = true;
    for(int i=0;i<n;i++){ 
        if(col[i]==-1) x&=bfs(i,col,graph);
        if(m[i]>2){x=false;break;}
    }
    cout<<(x ? "YES":"NO")<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}