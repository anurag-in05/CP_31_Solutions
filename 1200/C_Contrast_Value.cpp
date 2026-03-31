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

using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);for(auto &it:a)cin>>it;
    vector<long long> ans;
    long long prev_diff = 0;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        long long diff = a[i] - a[i-1];
        if (diff == 0) continue; 
        if (prev_diff == 0) {
            ans.push_back(a[i]);
            prev_diff = diff;
        } 
        else if ((diff > 0 && prev_diff > 0) || (diff < 0 && prev_diff < 0)) {
            // same direction → replace last
            ans.back() = a[i];
            prev_diff = diff;
        } 
        else {
            ans.push_back(a[i]);
            prev_diff = diff;
        }
    }
    cout<<ans.size()<<endl;
}

// one plank

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}