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

// convert vv to w

int rec(int i,string s,int n){
    if(i==s.size()) return (n==0);
    if(n==0) return 1;
    
}
void solve() {
    string s;cin>>s;
    string s1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1] && s[i]=='v') s1+='w';
        else if(s[i]=='o') s+='o';
    }
    cout<<rec(0,s1,3)<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    while(t--) solve();
    return 0;
}

