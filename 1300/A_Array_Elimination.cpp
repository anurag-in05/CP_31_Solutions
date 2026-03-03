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
    vl v(n);for(auto &it:v)cin>>it;
    
    vector<int> b(31, 0);

    for (auto x : v)
        for (int i = 0; i < 31; i++)
            if (x & (1LL << i))  b[i]++;

    long long g = 0;
    for (int i = 0; i < 31; i++) g = gcd(g, b[i]);
    if (g == 0) {
        for (int i = 1; i <= n; i++)    cout << i << " ";
        cout<<endl;
    }
    else {
        for (int i = 1; i <= n; i++)
            if (g % i == 0) cout << i << " ";
        cout<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}