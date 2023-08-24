#include<bits/stdc++.h>
 
 
using namespace std;
bool flag = false;
vector<string> mp;
vector<vector<int>> go = {
    {0,1},
    {0,-1},
    {1,0},
    {-1,0},
}; 
int main(){
    int n,m;
    cin >> n>>m;
    int startx,starty;
    mp.resize(n);
    vector<vector<int>> dis(n,vector<int>(m,-1));
    queue<pair<int,int>> qu;
    int endx,endy;
    for(int i =0;i<n;i++){
        cin >> mp[i];
        for(int j =0;j<m;j++){
            if(mp[i][j]=='A'){
                qu.push({i,j});
                dis[i][j]= 0;
            }else if(mp[i][j]=='B'){
                endx = i;
                endy = j;
            }
        }
    }
    int now = 0;
    while(qu.size()){
        int t = qu.size();  
        now++;
        for(int i =0;i<t;i++){
            int x = qu.front().first;
            int y = qu.front().second;
            qu.pop();
            for(int j =0;j<4;j++){
                int tox = x+go[j][0];
                int toy = y+go[j][1];
                // cout <<tox<<" "<<toy<<endl;
                if((mp[tox][toy]=='.'||mp[tox][toy]=='B')&&dis[tox][toy]==-1){
                    dis[tox][toy] = now;
                    qu.push({tox,toy});
                }
            }
        }
    }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cout << dis[i][j]<<" ";
    //         }
    //         cout <<endl;
    // }
    string res;
    int x = endx;
    int y = endy;
    while(true){
        for(int i =0;i<4;i++){
            int tox = x+go[i][0];
            int toy = y+go[i][1];
            if(dis[tox][toy]==dis[x][y]-1){
                x = tox;
                y = toy;
                
                break;
            }
        }
    }

}
