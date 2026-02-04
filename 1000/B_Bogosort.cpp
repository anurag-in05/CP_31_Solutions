#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll> 
using namespace std;

void solve(){
    int n;
    cin>>n;
    vl a(n);
    for(auto &it:a) cin>>it;
    sort(a.rbegin(),a.rend());
    for(auto it:a)cout<<it<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}