#include <bits/stdc++.h>
#define ll long long
#define all(v) v.begin(), v.end()
using namespace std;

bool valid(int n,vector<pair<int,int>> &v,vector<int> q,int mid){
    vector<int> pre(n,0); // prefix
    for(int i=0;i<mid;i++) pre[q[i]]=1;
    for(int i=1;i<n;i++) pre[i]+=pre[i-1];
    // 
    for(int i=0;i<v.size();i++){
        int l = v[i].first,r=v[i].second;
        int sum = pre[r] - (l > 0 ? pre[l - 1] : 0);
        if(sum > (r-l+1)/2 ) return true;
    }
    return false;
}
void solve() {
    int n,m;cin>>n>>m;
    vector<pair<int,int>> v(m);
    for(auto &it:v){
        cin>>it.first>>it.second;
        it.first--;
        it.second--;
    }
    int k;cin>>k;
    vector<int> q(k);
    for(int i=0;i<k;i++) cin>>q[i],q[i]--;
    sort(all(v));
    int l = 1,r = k,ans=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(valid(n,v,q,mid)){
            ans=mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}