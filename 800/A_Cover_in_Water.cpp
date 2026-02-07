#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        int cnt=0;
        bool x = true;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
            }
            if(i>=1 && i<n-1){
                if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                    x = false;
                    cout<<2<<endl;
                    break;
                }
            }
        }
        if(x) cout<<cnt<<endl;
    }
    return 0;
}