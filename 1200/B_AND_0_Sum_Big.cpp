#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

long long power(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
void solve(){
    ll n;cin>>n;
    ll k;cin>>k;
    cout<<power(n,k)%MOD<<endl;
}
// i used fact -> wrong
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}