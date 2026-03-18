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

const int N = 200005;
int st[N][20];
int lg[N];

int getmax(int l,int r){
    int j=lg[r-l+1];
    return max(st[l][j],st[r-(1<<j)+1][j]);
}
void solve() {
    int n,m;cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    lg[1]=0;
    for(int i=2;i<=m;i++) lg[i]=lg[i/2]+1;
    for(int i=0;i<m;i++) st[i][0]=v[i];

    for(int j=1;(1<<j)<=m;j++){
        for(int i=0;i+(1<<j)<=m;i++){
            st[i][j]=max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
    int q;cin>>q;
    while(q--){
        int xs,ys,xf,yf,k;
        cin>>xs>>ys>>xf>>yf>>k;
        if(abs(xs-xf)%k || abs(ys-yf)%k){
            cout<<"NO\n";
            continue;
        }
        int l=min(ys,yf)-1;
        int r=max(ys,yf)-1;
        int mx=getmax(l,r);
        int top=xs+((n-xs)/k)*k;
        if(top>mx) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}