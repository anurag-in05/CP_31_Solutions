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
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
using namespace std;

void solve(){
    ll n;cin>>n;
    vl v(n);for(auto &it:v)cin>>it;
    int cnt5=0;
    bool flag1=false,flag2=false;
    for(int i=0;i<n;i++){
        if(v[i]%5==0){
            cnt5++;
            v[i]=v[i]+v[i]%10;
        }
        else if(v[i]%10 != 0){
            while(v[i]%10 != 2){
                v[i]=(v[i] + v[i]%10);
            }
            if(v[i]%20 == 12) flag1=true;
            else flag2=true;
        }
    }
    if(cnt5>0){
        if(minv(v)==maxv(v))cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
    else cout<<((flag1 && flag2)?"No":"Yes")<<nl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}