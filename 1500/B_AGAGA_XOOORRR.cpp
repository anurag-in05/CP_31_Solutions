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
    vector<int> v(n);for(auto &it:v)cin>>it;
    bool check = false;
    ll prefxor=0;
    for(int i=0;i<n;i++){
        prefxor^=v[i];
        ll curxor=0;
        int segments=0;
        for(int j=i+1;j<n;j++){
            curxor^=v[j];
            if(curxor==prefxor){
                segments++;
                curxor=0;
            }
        }
        if(curxor==0 && segments>0){
            check=true;
            break;
        }
    }
    cout<<(check?"YES":"NO")<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}