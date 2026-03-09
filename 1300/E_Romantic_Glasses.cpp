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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int> m;
    map<int,int> m2;
    int t = -v[0],t2=v[0];
    m[t]=1;
    m2[t2]=1;
    for(int i=1;i<n;i++){
        if(i&1) t+=v[i],t2-=v[i];
        else t-=v[i],t2+=v[i];
        if(m[t] || t==0 || t2==0 || m[t2]){
            cout<<"YES"<<endl;
            return;
        }
        m[t]=1;
        m2[t2]=1;
    }
    cout<<"NO"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;tc = 1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}