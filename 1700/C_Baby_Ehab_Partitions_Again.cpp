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

void solve() {
    int n;cin>>n;
    vi v(n);for(auto &it:v)cin>>it;
    int sum = accumulate(all(v),0);
    if(sum%2){
        cout<<0<<endl;
        return;
    }
    vector<bool> dp(sum/2 + 1,false);
    dp[0]=1;
    for(auto it:v){ // 
        for(int i=sum/2;i>=it;i--) 
            dp[i]=dp[i]|dp[i-it];
    }
    if(!dp[sum / 2]){
        cout<<0;
        return;
    }
    cout<<"1"<<endl;
    int div = 1;
    while(true){
        for(int i=0;i<n;i++){
            if((v[i]/div)%2){ 
                cout<<i+1;
                return;
            }
        }
        div*=2;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}