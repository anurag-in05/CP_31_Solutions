#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int prev = 0,ans=0;
        vector<int> arr(n);
        for(auto &it: arr) {
            cin>>it;
            ans = max(ans,it-prev);
            prev = it;
        }
        ans = max(2*(k-arr[n-1]),ans);
        cout<<ans<<endl;
    }
    return 0;
}