#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> a(n);for(auto &it:a)cin>>it;
    vector<int> b(n);for(auto &it:b)cin>>it;
    map<pair<int,int>,int> m;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(b[i]==0) ans++;
            continue;
        }
        int p = -b[i], q = a[i];
        int g = gcd(abs(p),abs(q));
        p /= g;
        q /= g;
        if (q < 0){
            p = -p;
            q = -q;
        }
        m[{p, q}]++; 
    }
    int mx=0;
    for(auto it:m){
        mx=max(mx,it.second);
    }
    cout<<ans+mx<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}