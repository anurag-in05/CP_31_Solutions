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
const int mod = 1e9+7;

using namespace std;

void solve(){
    int n;cin>>n;
    int nonzero=0;
    vi v(n);for(auto &it:v){
        cin>>it;
        if(v[i]==0) nonzero++;
    }
    if(nonzero==n){
        cout<<"NO"<<endl;
        return;
    }
    // non neg
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(v[i]<0) neg.pb(v[i]);
        else pos.pb(v[i]);
    }

    vector<int> ans;
    ll psum=0,i=0;
    while(i<n){
        if(){

        }
        else{

        }
        i++;   
    }

    for(auto it:ans)cout<<it<<" ";
    cout<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}