#include <bits/stdc++.h>
#define ll long long
#define nl endl

using namespace std;

void solve() {
    int n,s;cin>>n>>s;
    vector<int> v(n);for(auto &it:v)cin>>it;
    int ans=-1,temp=0;;
    int l=0,r=0;
    while(r<n){
        temp+=v[r];
        if(temp>s){
            temp-=v[l];
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<(temp<s?-1:n-ans)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}