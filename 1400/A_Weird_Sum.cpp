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
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
using namespace std;

// impt
ll calc(vi &v){
    int n=v.size();
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        ans += 1LL * v[i] * (2*i - n + 1); 
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    int m;cin>>m;
    vvl v(n,vl(m,0));
    for(auto &it:v){
        for(auto &x:it) cin>>x;

    }
    vector<vector<int>> x(1e6);
    vector<vector<int>> y(1e6);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // storing row index and column index seperately
            x[v[i][j]].pb(i);
            y[v[i][j]].pb(j);
        }
    }
    long long ans=0;
    for(int i=0;i<1e6;i++){
        ans+=calc(x[i]);
        ans+=calc(y[i]);
    }
    cout<<ans<<endl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;t=1;
    while(t--) solve();
    return 0;
}