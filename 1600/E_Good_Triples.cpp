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


// 18 3 4   (here are carries)


// 10 12 3  ( no carries)

// we are carrying in the first one 



// make a guess -> valid triplets (a,b,c) such that a + b + c = n;
// iff no carries occur while adding a,b,c

// try and prove this -> 
// its true for 2 numbers so it would be true for 3 numbers as well
// proof by induction



// 5+6 = 11
// but dig(5)+dig(6) = 11
// but dig(11) = 9
// hence loosing a factor of 9 while doing a carry

int32_t main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--) solve();
    return 0;
}







