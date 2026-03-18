#include <bits/stdc++.h>
#define ll long long
#define nl endl

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<long long> fact;
    long long cur=1;
    for(int i=1;cur<=1e12;i++){
        cur*=i;
        fact.push_back(cur);
    }

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        int m = fact.size();
        int ans = INT_MAX;
        for(int i=0;i<(1<<m);i++){            
            ll sum=0;
            int cnt=0;
            for(int j=0;j<m;j++){
                if(i & (1 << j)){
                    sum += fact[j];
                    cnt++;
                }
            }
            if(sum>n) continue;
            long long remaining = n - sum;
            cnt += __builtin_popcountll(remaining);
            ans = min(ans, cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}