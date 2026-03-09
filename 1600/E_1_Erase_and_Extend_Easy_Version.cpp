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
    int n;cin>>n;
    int k;cin>>k;
    string s;cin>>s;
    string ans(k,'z');
    string temp;
    for(int i=0;i<n;i++){
        temp+=s[i];
        string tempans=temp;
        while(tempans.size()<k) tempans+=temp;
        tempans = tempans.substr(0,k);
        ans=min(tempans,ans);
    }
    cout<<ans<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}