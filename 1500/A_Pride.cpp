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
    // count ones
    int cnt=0;
    for(int i=0;i<n;i++) if(v[i]==1) cnt++;
    if(cnt>=1){
        cout<<n-cnt<<endl;
        return;
    }
    // 
    int len = -1,ans=INT_MAX;
    for(int i=0;i<n;i++){
        int g = v[i];
        for(int j=i+1;j<n;j++){
            g = __gcd(g,v[j]);
            if(g==1){
                len = j-i;
                int temp = len + n - 1;
                ans = min(ans,temp);
            }
        }
    }
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}