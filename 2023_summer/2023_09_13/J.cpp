#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define  vi vector<int>
#define pb push_back
vector<pair<int,int>> pos;
void connect(int x1,int y1,int x2,int y2,vector<vector<char>>& grid){
    for(int i = min(y1,y2);i<=max(y1,y2);i++){
        // cout <<x1<<" "<<i<<endl;
        grid[x1][i] = '#';
    }
    int start = min(x1,x2);
    int end = max(x1,x2);
    for(int i = start;i<=end;i++){
        grid[i][y2] = '#';
    }
}
void __solve(){
    int r,w;
    cin >> r>> w;
    vector<vector<char>> grid(r,vector<char>(w));
    for(int i =0;i<r;i++){
        for(int j =0;j<w;j++){
            cin >> grid[i][j];
            if(grid[i][j] == '#'){
                pos.pb({j,i});
            }
        }
    }
    sort(pos.begin(),pos.end());
    connect(pos[0].second,pos[0].first,pos[1].second,pos[1].first,grid);
    int start_ = min(pos[0].second,pos[1].second);
    int end_ = max(pos[0].second,pos[1].second);
    if(pos[2].second <= start_){
        connect(start_,pos[1].first,pos[2].second,pos[2].first,grid);
    }else if(pos[2].second<=end_){
        connect(pos[2].second,pos[1].first,pos[2].second,pos[2].first,grid);
    }else{
        connect(end_,pos[1].first,pos[2].second,pos[2].first,grid);
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<w;j++){
            cout << grid[i][j];
        }
        cout <<endl;
    }


}
signed main(){
    int t = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cin >>t; 
    while(t--){
        __solve();
    }
}