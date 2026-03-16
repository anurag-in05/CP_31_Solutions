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

const int mod = 1e9+7;

void solve() {
    int n,k;cin>>n>>k;
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    
    //
    for(int i=1;i<=n;i++) dp[i][1]=1;

    for(int len=2;len<=k;len++)
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                dp[j][len] = (dp[j][len]+dp[i][len-1])%mod;
            }
        }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=(ans+dp[i][k])%mod;
    }
    cout<<ans<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}