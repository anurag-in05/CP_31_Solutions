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

const ll MOD = 1e9+7;
const ll MAXN = 1005;

long long fact[MAXN], invfact[MAXN];

ll modpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) res=res*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }
    return res;
}

ll ncr(int n,int r){
    return (fact[n]*((invfact[r]*invfact[n-r])%MOD))%MOD;
}
void solve() {
    int n,k;cin>>n>>k;
    vector<int> v(n);for(auto &it:v) cin>>it;
    sort(rall(v));
    int x = v[k-1];
    int cnt=0;
    int need=0;
    for(int i=0;i<n;i++){
        if(v[i]==x){ 
            cnt++;
            if(i<k) need++;
        }
    }
    cout<<ncr(cnt,need)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    fact[0]=1;
    for(int i=1;i<MAXN;i++) fact[i]=fact[i-1]*i%MOD;
    invfact[MAXN-1] = modpow(fact[MAXN-1],MOD-2);
    for(int i = MAXN-2; i >= 0; i--) invfact[i] = invfact[i+1] * (i+1) % MOD;
    
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}