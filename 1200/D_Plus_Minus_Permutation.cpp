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

// jo common hai wo ignore ho jayenge

// fir jo x se uniquely divisble hai unko largest lelo

// - sum of first (uniquely y divisble numbers)

void solve() {
    ll n,x,y;cin>>n>>x>>y;
    ll s = x*y;
    s = s/__gcd(x,y);
    ll unx = n/x - n/s;
    ll uny = n/y - n/s;
    ll sum = ((n*(n+1))/2) - (((n-unx)*(n-unx+1))/2);
    cout<< sum -((uny*(uny+1))/2)  <<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}