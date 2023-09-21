#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long loli;
 
typedef vector<loli> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
 
const loli inf=1ull<<60;
int r,c,n;
vvi graph;
vvvi dp;
 
bool is_pass(int x,int y){
    if(x<=0 or x>=r-1 or y<=0 or y>=c-1)
        return false;
    return graph[x-1][y]>graph[x][y] and graph[x+1][y]>graph[x][y] and graph[x][y+1]<graph[x][y] and graph[x][y-1]<graph[x][y];
}
 
int main(){
    cin>>r>>c>>n;
    graph.assign(r,vi(c));
    for(auto&row:graph)
        for(auto&x:row){
            cin>>x;
        }
    dp.assign(r,vvi(c,vi(n+1,-1)));
 
    for(int i=0;i<r;++i){
        if(graph[i][0]!=-1)
            dp[i][0][0]=graph[i][0];
    }
    for(int j=1;j<c;++j){
        for(int i=0;i<r;++i){
            for(int k=0;k<n+1;++k){
                bool pass=is_pass(i,j);
                int pk=k-pass;
                if(pk<0) continue;
                if(i==0)
                    dp[i][j][k]=min(dp[i][j-1][pk],dp[i+1][j-1][pk])+graph[i][j];
                else if(i==r-1)
                    dp[i][j][k]=min(dp[i][j-1][pk],dp[i-1][j-1][pk])+graph[i][j];
                else
                    dp[i][j][k]=min(dp[i][j-1][pk],min(dp[i-1][j-1][pk],dp[i+1][j-1][pk]))+graph[i][j];
            }
        }
    }
    loli ans=inf;
    for(int i=0;i<r;++i){
        ans=min(ans,dp[i][c-1][n]);
    }
 
    if(ans>=inf)
        cout<<"impossible"<<endl;
    else
        cout<<ans<<endl;
}