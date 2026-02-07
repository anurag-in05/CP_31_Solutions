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
#define pop pop_back
using namespace std;


void solve(){
    int n;cin>>n;
    vvi adj;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        adj.pb({a,1});
        adj.pb({b,-1});
    } 
    sort(adj.begin(),adj.end(),[](const vector<int> &a,const vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1]; // condition as we cant watch them on same tv
        return a[0]<b[0];
    });
    int ans=0;
    for(int i=0;i<adj.size();i++){
        ans+=adj[i][1];
        if(ans>2){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    solve();
    return 0;
}