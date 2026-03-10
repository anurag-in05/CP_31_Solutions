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
#define yn(f) f ? cout<<"YES\n" : cout<<"NO\n"
#define syn(f) f ? cout<<"Yes\n" : cout<<"No\n"

using namespace std;

void solve() {
    int n;cin>>n;
    int k;cin>>k;
    vector<set<int>> adj(n);
    vector<int> indegree(n,0); 
    for(int j=0;j<k;j++){
        int a;cin>>a;
        int prev = -1;
        for(int i=1;i<n;i++){
            int b;cin>>b;
            b--;
            if(prev==-1) prev=b;
            else{
                if(adj[prev].count(b)==0){ 
                    indegree[b]++; 
                    adj[prev].insert(b);
                }
                prev = b; // bug
            }
        }
    }
    if(k==1 || n==2){
        cout<<"YES"<<endl;
        return;
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0) q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(!indegree[it]){
                q.push(it);
            }
        }
    }
    cout<<(ans.size() == n ? "YES" : "NO" )<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}