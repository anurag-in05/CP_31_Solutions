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
using namespace std;

// we try to bound it 

void solve() {
    int m,n;cin>>n>>m;
    vector<vector<int>> mx(n,vector<int>(m,-1)),mn(n,vector<int>(m,-1));

    vector<vector<int>> grid(n,vector<int>(m,-1));
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin >> grid[i][j];

    mx[0][0]=mn[0][0]=grid[0][0];
    for(int i=1;i<n;i++)
        mx[i][0]=mn[i][0]=mx[i-1][0]+grid[i][0];

    for(int j=1;j<m;j++)
        mx[0][j]=mn[0][j]=mx[0][j-1]+grid[0][j];
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            mx[i][j]=max(mx[i-1][j],mx[i][j-1])+grid[i][j];
            mn[i][j]=min(mn[i-1][j],mn[i][j-1])+grid[i][j];
        }
    }
    if(mx[n-1][m-1]%2 || mn[n-1][m-1]>0 || mx[n-1][m-1]<0) cout<<"NO"<<endl; 
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