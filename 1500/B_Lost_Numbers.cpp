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
const int mod = 1e9+7;
using namespace std;

int query(int i,int j){
    cout<<'?'<<' '<<i+1<<' '<<j+1<<endl;
    int a;cin>>a;
    return a;
}
void solve(){
    int v[6] = {4,8,15,16,23,42};
    map<ll,pair<int,int>> m;
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            m[v[i]*v[j]]={v[i],v[j]};
        }
    }
    int a1,a2,a3;
    auto m1 = m[query(0,1)];
    auto m2 = m[query(1,2)];
    if(m1.first == m2.second || m1.first==m2.first){
        a2 = m1.first;
        a1 = m1.second;
        if(m1.first == m2.second) a3 = m2.first;
        else a3 = m2.second;
    }
    else{
        a2 = m1.second;
        a1 = m1.first;
        if(m1.second == m2.second) a3 = m2.first;
        else a3 = m2.second;
    }
    m1 = m[query(3,4)];
    m2 = m[query(4,5)];
    int a4,a5,a6;
    if(m1.first == m2.second || m1.first==m2.first){
        a5 = m1.first;
        a4 = m1.second;
        if(m1.first == m2.second) a6 = m2.first;
        else a6 = m2.second;
    }
    else{
        a5 = m1.second;
        a4 = m1.first;
        if(m1.second == m2.second) a6 = m2.first;
        else a6 = m2.second;
    }
    cout<<'!'<<' '<<a1<<' '<<a2<<' '<<a3<<' '<<a4<<' '<<a5<<' '<<a6;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}