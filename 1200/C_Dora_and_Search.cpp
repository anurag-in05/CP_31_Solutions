#include <bits/stdc++.h>
using namespace std;

// my approach use a set and parent array as permutation

// int l=0,r=n-1
// int mn = *s.begin();       // smallest element
// int mx = *s.rbegin();      // largest element
// *prev(s.end());

void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)  cin>>v[i];
    int l=0,r=n-1,mine=1,maxe=n;
    while(l<r){
        if(v[l]==maxe || v[l]==mine){
            if(v[l]==maxe) maxe--;
            else mine++;
            l++;
        }
        else if(v[r]==maxe || v[r]==mine){
            if(v[r]==maxe) maxe--;
            else mine++;
            r--;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}