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
const int mod = 1e9+7;

using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vi v(k,-1);
    for(int i=0;i<n;i++){
        int j=i%k;
        if(v[j]!=-1 && s[i]!='?' && v[j]!=s[i]-'0'){
            cout<<"NO"<<endl;
            return;
        } 
        else if(s[i]!='?') v[j]=s[i]-'0';
    }
    //
    int cnt0=0,cnt1=0;
    for(int i=0;i<k;i++){
        cnt0=cnt0+(v[i]==0);
        cnt1=cnt1+(v[i]==1);
    }
    if(cnt0>k/2 || cnt1>k/2){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}