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
    int n;cin>>n;
    vl freq(n,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        freq[x-1]++;
    }
    sort(freq.rbegin(),freq.rend());
    
    //IMPT
    ll ans=0;
    int last=INT_MAX;
    for(int i=0;i<n;i++){
        if(last==0) break;
        if(freq[i]>=last){
            ans+=last-1;
            last--;
        }
        else{
            ans+=freq[i];
            last=freq[i];
        }
    }
    cout<<ans<<nl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}