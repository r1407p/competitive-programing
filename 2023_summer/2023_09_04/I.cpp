#include <bits/stdc++.h>
using namespace std;
const int maxn = 505;


int main(){
    int n,c;
    cin >> n>>c;
    vector<vector<int>> nums;
    for(int i =1;i<=n;i++){
        int a,b;
        cin >> a>>b;
        a  = max(a,b);
        nums.push_back({b-a,a,b,i});
        //0:sort 
        //1:need 
        //2:increase
        //3:ind
    }
    sort(nums.begin(),nums.end());
    vector<vector<int>> dp(n+1,vector<int> (c+1,-1));
    vector<vector<int>> from(n+1,vector<int> (c+1,-1));
    vector<vector<int>> updated(n+1,vector<int> (c+1,-1));
    //dp[0][j]is initial state;
    dp[0][0] = 0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<=c;j++){//keep last time record
            dp[i+1][j] = dp[i][j];
            from[i+1][j] = j;
        }
        for(int j =0;j<=c;j++){ // now is add nums[i]
            if(dp[i][j]>=0){//avaliable to add
                if(j+nums[i][1]<=c){//not exceed limit
                    if(dp[i][j]+1>dp[i+1][j+nums[i][2]]){
                        dp[i+1][j+nums[i][2]] = dp[i][j]+1;
                        from[i+1][j+nums[i][2]] = j;
                        updated[i+1][j+nums[i][2]] = nums[i][3];
                    }
                }
            }
        }
    }
    int ind = 0;
    for(int j = 0;j<=c;j++){
        if(dp[n][j]>dp[n][ind])ind = j;
    }
    cout << dp[n][ind]<<endl;
    vector<int> res;
    for(int i = n;i>0;i--){
        if(updated[i][ind]!=-1){
            res.push_back(updated[i][ind]);
        }
        ind = from[i][ind];
    }
    for(int i = res.size()-1;i>=0;i--){
        cout <<res[i]<<' ';
    }cout <<endl;
}