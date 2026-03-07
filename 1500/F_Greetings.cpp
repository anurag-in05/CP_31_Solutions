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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

void solve() {
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for (auto &x : v)
        cin >> x.first >> x.second;
    sort(v.begin(), v.end());

    pbds st;
    long long ans = 0;
    for (auto &it : v) {
        ans += st.size() - st.order_of_key(it.second);
        st.insert(it.second);
    }
    cout<<ans<<"\n";
}
// can also be solved using inversion count 


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}