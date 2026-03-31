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

using namespace std;

void solve() {
    ll n,c;cin>>n>>c;
    vl v(n);for(auto &it:v)cin>>it;
    
    ll ans = (n+1)*(n+2)/2;
    
    ll ne=0,po=0;
    for(int i=0;i<n;i++){
        if(v[i]&1) po++;
        else ne++;

        //
        // 
        
    }
    ans += (ne)*(ne+1)/2;
    ans += (po)*(po+1)/2;;
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