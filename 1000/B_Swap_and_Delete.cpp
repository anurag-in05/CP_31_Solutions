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
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(cnt0>0) cnt0--;
            else{
                cout<<n-i<<endl;
                return;
            }
        }
        else{
            if(cnt1>0) cnt1--;
            else{
                cout<<n-i<<endl;
                return;
            }
        }
    }
    cout<<0<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}