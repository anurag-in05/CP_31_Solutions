#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define vi vector<int> 
#define nl endl
using namespace std;


void solve(){
    string s;
    ll n;cin>>n>>s;
    map<int,int> mp;
    mp[0]=1;
    ll ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cnt += (s[i]-'0'-1);
        if(mp.find(cnt)!=mp.end()) ans+=mp[cnt];
        mp[cnt]++;
    }
    cout<<ans<<endl;
}

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}