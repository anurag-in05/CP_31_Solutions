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

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int ans=n;
    for(char i='a';i<='z';i++){
        int l=0,r=n-1;
        int t=0;
        bool possible = true;
        while(l<=r){
            if(s[l]==s[r]) l++,r--;
            else{
                t++;
                if(s[l]==i) l++;
                else if(s[r]==i) r--;
                else{
                    possible=false;
                    break;
                }
            }
        }
        if(possible) ans=min(ans,t);
    }
    cout<<(ans==n?-1:ans)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}