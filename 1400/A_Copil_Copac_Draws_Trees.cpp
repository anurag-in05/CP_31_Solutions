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

void dfs(int &ans,int node,vector<vector<int>> &v,vector<int> &dp,vector<int> &first){
    ans=max(ans,dp[node]);
    for(auto it:v[node]){
        if(dp[it]==0){
            if(node==1){
                dp[it]=1;
                dfs(ans,node,v,dp,first);
            }
            else{
                if(dp[it]);
            }
        }
    }
}
void solve() {
    int n;cin>>n;
    vector<vector<int>> v(n);
    vector<int> dp(n,0);
    vector<int> first(n,-1);
    map<pair<int,int>,int> m   ;
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        if(first[a]==-1) first[a]=i-1;
        if(first[b]==-1) first[b]=i-1;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);

    }
    dp[0]=1;
    int ans=0;
    dfs(ans,0,v,dp,first);
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}