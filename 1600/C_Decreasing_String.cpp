#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

// first intuition - 

// property 
// look for property
void solve(){
    ll n;cin>>n;
    if(n==0){
        cout<<1<<nl;
        return;
    }
    ll ans=1;
    while(n>0){
        ll x = n%10;
        ans *= ((x+1)*(x+2))/2;
        n/=10;
    }
    cout<<ans<<nl;
}

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--) solve();
    return 0;
}


// cab + ab + a 

// abcd + abc + ab + a -> 
// position p pe konsi string hogi 


// O(10^6) 

// // O(n or nlogn) solution or using some map or set
// // we can index the occurence of a,b,c,d,e,f



// 4 + 3 + 2 + 1 

// 3 + 2 + 1

// can we identify 
// ye number konsi string ka part hoga 
// like s1,s2 ... sn


// fir wo x aa gaya then x characters ko 
// remove karke dekh
// fir wo position aa gayi remainder ke saath


// kitni baar iteration hua uska -1 signifies number of string
// fir us string choti hogi 