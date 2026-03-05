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
using namespace std;

int N;
int rec(int i,int t,vl &v,vvl &dp){
    if(i>=N) return 0;
    if(dp[i][t]!=-1) return dp[i][t];
    int ans=1e9;
    
    if(t==0){
        return dp[i][t] = min(rec(i+1,1,v,dp),rec(i+2,1,v,dp));
    }
    if(i+1<N) ans=rec(i+2,0,v,dp) + (v[i]==1) + (v[i+1]==1) ; 
    ans=min(ans,rec(i+1,0,v,dp) + (v[i]==1));
    return dp[i][t] = ans;
}
void solve(){
    int n;cin>>n;
    N=n;
    vl v(n);for(auto &it:v)cin>>it;
    vvl dp(n,vl(2,-1));
    cout<<rec(0,1,v,dp)<<nl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--) solve();
    return 0;
}