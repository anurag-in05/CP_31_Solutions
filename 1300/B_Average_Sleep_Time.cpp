#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    vector<double> v(n);for(auto &it:v) cin>>it;
    long double temp=0;
    for(int i=0;i<k;i++) temp+=v[i];
    long double ans = temp;
    int i=k;
    while(i<n){
        temp+=v[i];
        temp-=v[i-k];
        i++;
        ans+=temp;
    }
    cout<<setprecision(10)<<(long double)ans/(n-k+1)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;t = 1;
    while(t--) solve();
    return 0;
}