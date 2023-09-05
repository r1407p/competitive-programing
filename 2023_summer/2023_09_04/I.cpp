#include <bits/stdc++.h>
using namespace std;
const int maxn = 505;


int main(){
    int n,c;
    cin >> n>>c;
    vector<vector<int>> nums;
    for(int i =0;i<n;i++){
        int a,b;
        cin >> a>>b;
        if(b>=a)a = b;
        nums.push_back({b-a,a,b,i+1});
    }
    sort(nums.begin(),nums.end());
    vector<int>used(c+5,0);
    int res = 0;
    int ind = -1;
    for(int i =0;i<n;i++){
        for(int j =c-nums[i][1];j>=0;j--){
            used[j+nums[i][2]] = max(used[j]+1,used[j+nums[i][2]]);
            if(used[j+nums[i][2]]>res){
                res = used[j+nums[i][2]];
                ind = j+nums[i][2];
            }
        }
    }
    int now = ind;
    cout <<res<<endl;
    if(res==0)return 0;
    vector<int> tt;
    while(used[now]!=0){
        // cout <<now <<"!!!\n";
        for(int i = n-1;i>=0;i--){
            if(used[now]-1==used[now-nums[i][2]]&&now-nums[i][2]+nums[i][0]<=c){
                tt.push_back(nums[i][3]);
                now = now-nums[i][2];
                continue;
            }
        }
    }
    for(int i = tt.size()-1;i>=0;i--){
        cout <<tt[i]<<" ";
    }
    cout <<endl;





}