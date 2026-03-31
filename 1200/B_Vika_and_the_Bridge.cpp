#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        
        vector<vector<int>>col(k+1);

        for(int i=1;i<=k;i++) col[i].push_back(0);
        for(int i=0;i<n;i++)  col[v[i]].push_back(i+1);
        for(int i=1;i<=k;i++) col[i].push_back(n+1);

        int ans=INT_MAX;
        for(int i=1;i<=k;i++){
            int max1=0,max2=0;
            for(int j=0;j+1<col[i].size();j++){
                int gap=col[i][j+1]-col[i][j]-1;
                if(gap>=max1){
                    max2=max1;
                    max1=gap;
                }else if(gap>max2){
                    max2=gap;
                }
            }
            ans=min(ans,max(max2,max1/2));
        }
        
        cout<<ans<<"\n";
    }
}