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

// can all tasks be done in m time ? 

bool possible(int mid,vector<int> &v){
    long long need =0;
    ll can_help=0;
    for(int i=0;i<v.size();i++){   
        if(v[i]>mid) need+=(v[i]-mid);
        else can_help += (mid-v[i])/2;
    }
    return can_help>=need;
}
void solve() {
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<m;i++){
        int a;cin>>a;
        v[a-1]++;
    }
    int low = 0;
    int high = 2*m;
    int ans=0;
    while(low<=high){
        int mid = (low+high)/2;
        if(possible(mid,v)){ // is it achievable to get time as mid 
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
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