#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n); for(auto &it:v) cin>>it;
    // 2<=k<=5
    if(k!=4){
        int ans=k;
        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cout<<0<<endl;
                return;
            }
            else ans=min(ans,k-(v[i]%k));
        }
        cout<<ans<<endl;
    }
    else{
        int ans=k,cnt2=0;
        for(int i=0;i<n;i++){
            if(v[i]%4==0){
                cout<<0<<endl;
                return;
            }
            else if(v[i]%2==0) cnt2++;
            else ans=min(ans, 4 - (v[i]%4) );
        }
        if(cnt2>=2) cout<<0<<endl;
        else if(cnt2==1) cout<<1<<endl;
        else cout<<min(ans,2)<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}