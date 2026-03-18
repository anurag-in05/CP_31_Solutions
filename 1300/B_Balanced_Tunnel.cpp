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
    vector<int> a(n),b(n);
    set<int> vis;
    int i=0,j=0,ans=0;
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    reverse(all(a));
    reverse(all(b));
    while( j<n && i<n){
        if(vis.count(b[j])){
            j++;
        }
        else if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            vis.insert(a[i]);
            i++;
            ans++;
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}