#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            if(s[i]=='a') s[i] = 'z';
            else s[i]--;

            if(i+1<s.size() && s[i]==s[i+1]){
                if(s[i]=='a') s[i] = 'z';
                else s[i]--;
            }
        }
    }
    cout<<s<<endl;
}