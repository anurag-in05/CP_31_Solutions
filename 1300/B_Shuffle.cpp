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
    ll n,x,m;cin>>n>>x>>m;
    ll mine=n+1,maxe=0;
    int contains = false;
    for(int i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        if(contains){
            // partially overlap
            if(b>=mine && a<=maxe){ // use and and not or ? 
            mine=min(a,mine);
            maxe=max(maxe,b);
            }
        }
        else{
            if(a<=x && b>=x){
            mine=a;
            maxe=b;
            contains = true;
            }
        }
    }
    cout<<(maxe-mine+1 >= 0 ? maxe-mine+1:1)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}