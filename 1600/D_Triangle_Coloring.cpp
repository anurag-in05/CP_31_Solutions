#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
using namespace std;
const ll MOD = 998244353;

ll modpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1) res=(res*a)%MOD;
        a = (a*a)%MOD;
        b/=2;
    }
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    ll ans=1;
    for(int i=0;i+2<n;i+=3){
        ll a1=v[i],a2=v[i+1],a3=v[i+2];
        ll min_e = min({a1,a2,a3});
        int cnt = 0;
        if(min_e==a1) cnt++;
        if(min_e==a2) cnt++;
        if(min_e==a3) cnt++; 
        ans = (ans*cnt)%MOD; 
    }
    int m = n/3;
    vector<ll> fact(m + 1);
    vector<ll> invfact(m + 1);

    fact[0] = 1;
    for(int i=1;i<=m;i++) fact[i]=(fact[i-1]*i)%MOD;
    invfact[m] = modpow(fact[m],MOD-2);
    for(int i=m-1;i>=0;i--) invfact[i]=(invfact[i+1]*(i+1))%MOD;

    ll a = n/3,b=n/6;

    cout<<(ans*((fact[a]*((invfact[b]*invfact[a-b])%MOD))%MOD))%MOD<<endl;
    return 0;
}