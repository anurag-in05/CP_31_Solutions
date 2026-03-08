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

int ask(int a,int b){
    cout<<'?'<<" "<<a<<" "<<b<<endl;
    cout.flush();
    int k;
    cin >> k;
    return k;
}
void solve() { // cph giving wrong answer
    int n;cin>>n;
    vector<int> ans(n+1);
    int j = 1;
    for(int i=2;i<=n;i++){
        int x = ask(j,i); // pi mod pj 
        int y = ask(i,j); // pj mod pi 
        if(x>y){ // pi > pj
            ans[j] = x;
            j=i;
        }
        else ans[i]=y;
    }
    ans[j]=n; // correctness
    cout<<"!"<<" ";
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}