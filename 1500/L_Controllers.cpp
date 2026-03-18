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
    string s;cin>>s;
    int p = count(all(s),'+');
    int neg = n - p;
    int q;cin>>q;
    while(q--){
        int a,b;cin>>a>>b;
        if(a>b) swap(a,b);
        if(p==neg){
            cout<<"YES"<<endl;
            continue;
        }
        else if(a==b){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            long long num = 1LL * -b * (p - neg);
            long long den = a - b;
            if(num % den != 0){
                cout<<"NO\n";
                continue;
            }
            long long k = num / den;
            if(-neg <= k && k <= p) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}