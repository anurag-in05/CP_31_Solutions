#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

int n,k;
const int MOD = 1e9+7;
// ll dfs(int i,int cur_and,vector<int> &a){
//     if(i==a.size()){
//         if(cur_and==-1) return 0;
//         return (__builtin_popcount(cur_and)==k);
//     }
//     ll ans=0;
//     // skip
//     ans+=dfs(i+1,cur_and,a);
//     int new_and;
//     // take
//     if(cur_and==-1) new_and=a[i];
//     else new_and = cur_and&a[i];
//     ans+=dfs(i+1,new_and,a);
//     return ans;
// }
void solve() {
    int n;cin>>n;
    int k;cin>>k;
    // vector<int> dp(n,-1);
    vector<int> a(n);for(auto &it:a)cin>>it;
    // cout<<dfs(0,-1)<<endl;

    vector<int> cur(64,0),prev(64,0);
    for(int i=0;i<n;i++){
        // skipping entirely
        cur = prev;
        // start new subsequence
        cur[a[i]] = (cur[a[i]] + 1) % MOD;
        // extend existing sequence
        for(int mask = 0;mask<64;mask++){
            int new_mask = mask&a[i];
            cur[new_mask] = (cur[new_mask]+prev[mask])%MOD;
        }
        prev=cur;
    }
    long long ans = 0;
    for(int mask=0; mask<64; mask++) {
        if(__builtin_popcount(mask) == k)
            ans = (ans + prev[mask]) % MOD;
    }

    cout << ans << "\n";
}


// dp[mask] = number of subequences whose AND = mask

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}