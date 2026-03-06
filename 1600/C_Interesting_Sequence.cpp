#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

void solve() {
    ll n;cin>>n;
    ll x;cin>>x;
    ll m=-1;
    if(n==x){
        cout<<n<<endl;
        return;
    }
    if((n&x)!=x){
        cout<<-1<<endl;
        return;
    }
    for(ll i=0;i<=61;i++){
        if( ((n >> i) << i ) == x ){ 
            m = x|(1LL<<i);
            if(m<n) m=-1;
            break;
        }
    }
    cout<<m<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}