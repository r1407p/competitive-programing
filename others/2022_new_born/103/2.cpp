#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int ans =0;
int temp =0;
int n,m;
void del(vector<vector<int>>& map,int i,int j){
    temp++;
    map[i][j] =0;
    if(i&&map[i-1][j])del(map,i-1,j);
    if(j&&map[i][j-1])del(map,i,j-1);
    if(i<n-1&&map[i+1][j])del(map,i+1,j);
    if(j<m-1&&map[i][j+1])del(map,i,j+1);
}
int main(){
    cin >> n>>m;
    vector<vector<int>> map(n,vector<int>(m,0));
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>map[i][j];
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(map[i][j]){
                temp =0;
                del(map,i,j);
                ans = max(temp,ans);
            }
        }
    }
    cout << ans;
}