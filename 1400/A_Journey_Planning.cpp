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

void solve(){
    int n;cin>>n;
    vl v(n);
    unordered_map<int,ll> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]-i]+=v[i];
    }
    ll ans=0;
    for(auto it:m){
        ans=max(ans,it.second);
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