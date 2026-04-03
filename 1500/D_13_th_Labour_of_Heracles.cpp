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
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> v(n);
    ll ans=0;
    for(auto &it:v){    
        cin>>it;
        ans+=it;
    }
    vi in(n,-1);
    for(int i=1;i<n;i++){
        int a,b;cin>>a>>b;
        in[a-1]++;
        in[b-1]++;
    }
    vi temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<in[i];j++) temp.pb(v[i]);
    }
    sort(rall(temp));
    cout<<ans;
    for(auto &it:temp){
        ans+=it;
        cout<<" "<<ans;
    }
    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}