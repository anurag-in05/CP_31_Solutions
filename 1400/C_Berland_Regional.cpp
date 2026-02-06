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
    vi u(n),s(n);
    for(auto &it:u) cin>>it;
    for(auto &it:s) cin>>it;
    vvl skills(n);
    for(int i=0;i<n;i++){
        skills[u[i]-1].pb(s[i]);
    }
    for(auto v:skills){
        sort(v.begin(),v.end());
    }
    vvl pre(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(int)skills[i].size();j++){
            
        }
    }
    vl ans(n);
    for(int i=0;i<n;i++){

    }
    for(int i=) cout<<ans[i]<<" ";
    cout<<endl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}