#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--){
        string s; 
        cin >> s;
        int n = s.size();
        for(int k = n/2; k >= 0; k--){
            int cur = 0, best = 0;
            for(int i = 0; i + k < n; i++){
                if(s[i]=='?' || s[i+k]=='?' || s[i]==s[i+k]) cur++;
                else best = max(best, cur), cur = 0;
            }
            best = max(best, cur);
            if(best >= k){
                cout << 2*k << "\n";
                break;
            }
        }
    }
}