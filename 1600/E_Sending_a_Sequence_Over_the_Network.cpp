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

// dp solution 
// dekh if you go naively for recursion it goes O(n^2)
// think in tabulatino way. 

void solve() {
    int n;cin>>n;
    vector<long long> b(n+1);
    for(int i=1;i<=n;i++) cin>>b[i];
    vector<bool> dp(n+1,false);
    dp[0] = true;
    for(int i=1;i<=n;i++){
        if(i-b[i]-1>=0 && dp[i-b[i]-1]) dp[i] = true;
        if(i+b[i]<=n && dp[i-1]) dp[i + b[i]] = true;
    }
    cout<< (dp[n] == true? "YES" : "NO") <<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}