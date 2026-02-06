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
    int k;cin>>k;
    vl v(n);for(auto &it:v)cin>>it;
    
    int ans=0;
    int cnt=0;
    for(int i=1;i<n;i++){
        if(v[i-1]<2*v[i]){
            cnt++;
        }
        else{
            if(cnt>=k) ans+=max(0,cnt-k+1);    
            cnt=0;
        } 
    }
    ///one more prefix sum way lets see that as well
    
    if(cnt>=k) ans+=max(0,cnt-k+1);
    cout<<ans<<nl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}