#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

using namespace std;
bool possible(vector<ll> &v,int mid,int k){
    for(int i=0;i<(int)v.size();i++){
        ll need = mid;
        ll cost = 0;
        for(int j=i;j<v.size();j++){
            if(need<=v[j]) break;
            if(j==v.size()-1){
                cost=k+1;
                break;
            }
            cost+=(need-v[j]);
            need--;
        }
        if(cost<=k) return true;
    }
    return false;
}
void solve() {
    ll n,k;cin>>n>>k;
    vector<ll> v(n);for(auto &it:v) cin>>it;
    ll low = *max_element(all(v));
    ll high = low+k;
    ll ans=0;
    while(low<=high){
        ll mid = (low+high)/2;
        if(possible(v,mid,k)){
            ans = mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}