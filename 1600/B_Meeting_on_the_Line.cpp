#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define vpi vector<pair<int,int>>
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

// minimax problem 

bool possible(int mid,vpi &vp){

}

void solve() {
    int n;cin>>n;
    vector<int> v(n),a(n);
    for(auto &it:v) cin>>it;
    for(auto &it:a) cin>>it;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++) vp.pb({v[i],a[i]});
    
    // 
    int low = 1,high = n-1,ans=0;
    while(low<=high){
        int mid = (low+high)/2;
        //
        if(possible(mid,vp)){

        }
        else{

        }
        //
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