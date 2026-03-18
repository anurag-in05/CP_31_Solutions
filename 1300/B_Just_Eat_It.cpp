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
    ll n;cin>>n;
    vl a(n);for(auto &it:a)cin>>it;
    ll maximum_subarray_sum=0,total=accumulate(all(a),0LL);
    ll current_sum=0;
    for (int i = 0; i < n-1; i++){
        current_sum += a[i];
        if(current_sum<0){
            current_sum=0;
        }
        maximum_subarray_sum = max(maximum_subarray_sum, current_sum);
    }
    current_sum=0;
    for (int i = 1; i < n; i++){
        current_sum += a[i];
        if(current_sum<0){
            current_sum=0;
        }
        maximum_subarray_sum = max(maximum_subarray_sum, current_sum);
    }
    if(total>maximum_subarray_sum) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}