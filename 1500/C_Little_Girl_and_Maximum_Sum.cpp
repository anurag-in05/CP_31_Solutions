#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vi>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
using namespace std;
void solve(){
    int n;cin>>n;
    int q;cin>>q;
    vl v(n);for(auto &it:v)cin>>it;
    sort(v.begin(),v.end());
    vl range(n,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        range[l]++;
        if(r<n-1) range[r+1]--;
    }

    ll t=0;
    vl b(n,0);
    for(int i=0;i<n;i++){
        t+=range[i];
        b[i]=t;
    }
    sort(b.begin(),b.end());
 
    ll res=0;
    for(int i=0;i<n;i++){
        res+=(b[i]*1ll*v[i]);
    }
    cout<<res<<endl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    solve();
    return 0;
}