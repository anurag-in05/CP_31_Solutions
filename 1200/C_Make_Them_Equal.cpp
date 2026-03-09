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

void solve() {
    int n;cin>>n;
    char c;cin>>c;
    string s;cin>>s;

    // if all equal 
    bool a=true;
    for(int i=0;i<n;i++) if(s[i]!=c) a= false;
    if(a){
        cout<<0<<endl;
        return;
    }

    // if one operation needed
    for(int i=2;i<=n;i++){
        if(s[i-1]==c){
            int j=i-1;
            bool possible = true;
            while(j<n){
                if(s[j]!=c){
                    possible = false;
                    break;
                }
                j+=i;
            }
            if(possible){
                cout<<1<<endl;
                cout<<i<<endl;
                return;
            }
        }
    }
    // else 2 needed
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}