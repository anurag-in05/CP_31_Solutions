#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vi>
#define vpl vector<pair<ll,ll>>
#define mp map<ll,ll>
#define pr pair<ll,ll>
#define pb push_back
using namespace std;


void solve(){
    int n;cin>>n;
    int k1,k2;cin>>k1>>k2;
    int k = k1+k2;

    vl a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    
    priority_queue<ll> pq;
    for(int i=0;i<n;i++) pq.push(abs(a[i]-b[i]));
    while(k>0){
        ll x = pq.top();
        pq.pop();
        if(x==0) break;
        x--;
        k--;
        pq.push(x);
    }
    long long ans = 0;
    while(!pq.empty()){
        ll t = pq.top();
        pq.pop();
        ans += t*t;
    }
    cout<<( k%2 ? ans+1:ans)<<endl;
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    solve();
    return 0;
}