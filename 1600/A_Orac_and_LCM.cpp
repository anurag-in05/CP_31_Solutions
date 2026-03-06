#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXA = 200000;

int spf[MAXA + 1];

ll pow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=1;i<=MAXA;i++) spf[i] = i;
    for(int i=2;i*i<=MAXA;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=MAXA;j+=i) if(spf[j] == j) spf[j] = i;
        }
    }
    int n; cin>>n;
    vector<int> min1(MAXA + 1, INT_MAX);
    vector<int> min2(MAXA + 1, INT_MAX);
    vector<int> cnt(MAXA + 1, 0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        map<int,int>mp;
        while(x>1){
            int p = spf[x];
            int c = 0;
            while(spf[x] == p){
                x /= p;
                c++;
            }
            mp[p] = c; // storing power
        }
        for(auto[p,c]:mp){
            cnt[p]++;
            if(c<min1[p]){
                min2[p] = min1[p];
                min1[p] = c;
            }
            else if(c<min2[p]){
                min2[p] = c;
            }
        }
    }
    long long ans = 1;
    for(ll p = 2; p <= MAXA; p++) {
        ll power = 0;
        if(cnt[p] == n) power = min2[p];
        else if(cnt[p] == n-1) power = min1[p];
        ans *= pow(p,power);
    }
    cout<<ans<<"\n";
}