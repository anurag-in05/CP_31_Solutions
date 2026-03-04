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


// intution -> try for n==2 
// 

// dp ? 

// try e,g versions of this contest



// we can reduce the problem into 
// small problem 
// we need to take first 3 maximums of each array
// fir sabko dekhle konsa max ayega
vector<pair<int,int>> find_top3(vector<int> &a){
    vector<pair<int,int>> v;
    for(int i=0;i<a.size();i++){
        v.push_back({a[i], i});
    }
    sort(v.rbegin(), v.rend());
    vector<pair<int,int>> res;
    for(int i=0;i<3;i++){
        res.push_back(v[i]);
    }
    return res;
}
void solve() {
    int n;cin>>n;
    vector<int> a(n),b(n),c(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    for(auto &it:c) cin>>it;

    auto A = find_top3(a);
    auto B = find_top3(b);
    auto C = find_top3(c);
    int ans = 0;
    for(auto x : A){
        for(auto y : B){
            for(auto z : C){
                int i = x.second;
                int j = y.second;
                int k = z.second;
                if(i != j && j != k && i != k){
                    ans = max(ans, x.first + y.first + z.first);
                }

            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}