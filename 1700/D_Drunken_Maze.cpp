#include <bits/stdc++.h>
using namespace std;
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
struct Node{
    int x,y,lc,st,ts;
};
bool check(int x,int y,int n,int m){
    return (x>=0 && x<n && y>=0 && y<m);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m,x,y;
    cin>>n>>m;
    char grid[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>grid[i][j];
            if(grid[i][j]=='S'){
                x=i,y=j;
            }
        }
    }
    int vis[n][m][4][3]={};
    queue<Node> q;
    q.push({x,y,0,0,0});
    vis[x][y][0][0]=1;
    while(q.size()){
        auto [i,j,lc,st,ts]=q.front();
        if(grid[i][j]=='T'){
            cout<<ts;
            return 0;
        }
        q.pop();
        for(int k=0;k<4;++k){
            int g=(k==lc ? st : 0);
            if(!check(i+dx[k],j+dy[k],n,m) || grid[i+dx[k]][j+dy[k]]=='#' || (k==lc && st>2) || vis[i+dx[k]][j+dy[k]][k][g+1]) continue;
            vis[i+dx[k]][j+dy[k]][k][g+1]=1;
            q.push({i+dx[k],j+dy[k],k,g+1,ts+1});
        }
    }
    cout<<-1;
}