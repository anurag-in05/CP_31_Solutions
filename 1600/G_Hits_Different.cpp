#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll ans[2000007];
ll dp[1500][1500];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll cur = 1;

    for(int d=1;d<1500;d++) {
        for(int j=d-1;j>=1;j--){
            dp[j][d-j] = dp[j-1][d-j] + dp[j][d-j-1] - dp[j-1][d-j-1] + cur*cur ;
            if(cur>1e6+1) break;
            ans[cur]=dp[j][d-j];
            cur++;
        }       
        if(cur>1e6+1) break;
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << ans[n] << '\n';
    }

    return 0;
}