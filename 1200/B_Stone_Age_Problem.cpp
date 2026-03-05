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

void solve() {
    int n,q;cin>>n>>q;
    vector<int> v(n);
    for(auto &it:v) cin>>it;
    int sum = accumulate(v.begin(),v.end(),0);
    // vector<int> ; 
    while(q--){
        int t;cin>>t;
        if(t==1){
            int i,x;cin>>i>>x;

        }
        else{
            int a;cin>>a;
            cout<<(1LL)*a*n<<nl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}