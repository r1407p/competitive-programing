#include <iostream>
#include <vector>
#include <algorithm>
#define int long long 
using namespace std;
int cal(vector<int> nums){
    // cout << nums[0]<<nums[1]<<nums[2]<<endl;
    int res =0;
    res+=nums[0]*nums[0];
    res+=nums[1]*nums[1];
    res+=nums[2]*nums[2];
    sort(nums.begin(),nums.end());
    res+=nums[0]*7;
    return res;
}
void solve(){
    vector<int> nums(3);
    cin >>nums[0]>>nums[1]>>nums[2];
    int temp;
    cin >> temp;
    sort(nums.begin(),nums.end());
    int res = 0;
    if(temp<=1000){
        for(int i =0;i<=temp;i++){
            for(int j =0;j<=temp;j++){
                if(i+j>temp){
                    continue;
                }
                res = max(res,cal({nums[0]+i,nums[1]+j,nums[2]+temp-i-j}));
            }
        }
    }else{
        res = cal({nums[0],nums[1],nums[2]+temp});
    }
    cout<<res<<endl;
}

signed main(){
    int t;
    cin >>t;
    while(t--)
        solve();
}