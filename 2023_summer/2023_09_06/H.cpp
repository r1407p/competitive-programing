#include <bits/stdc++.h>
using namespace std;
fstream fin("stations.in");
#define int long long
#define vi vector<int>
#define vvi vector<vi>

vvi get_top(vvi nums, vi nw){
    nums.push_back(nw);
    sort(nums.rbegin(),nums.rend());
    if(nums.size()==5)
        nums.pop_back();   
    return nums;
}
void solve(){
    int n;
    fin >>n;
    string s;
    fin >>s;
    // cout <<s<<endl;
    vector<vi> nums;
    int i =0;
    for(i =0;i<n;i++){
        if(s[i] =='+')break;
    }
    vvi best;
    int last = -1;
    int now = 0;
    for(i;i<n;i++){
        if(s[i]=='+'){
            nums.push_back({i-last-1,now});
            best = get_top(best,{i-last-1,now});
            last = i;
            now++;
        }
    }
    nums.push_back({n-last-1,now});
    best = get_top(best,{n-last-1,now});
    

    // for(auto x:nums){
    //     cout <<x<<" ";
    // }cout <<endl;
    int len = nums.size();
    int mx = max(nums[0],nums[len-1]);
    bool is_end = true;
    for(int i = 1;i<len-1;i++){
        if((nums[i]+1)/2>=mx){
            is_end = false;
        }
    }
    // 0 1
    // len -2 len-1
    int ind = -1;
    int sec = -1;
    for(int i = 1;i<len -2;i++){
        if((nums[i]+nums[i+1]+1+1)/2>=mx){

        }
    }
    

}
signed main(){
    int _;
    fin >>_;
    while(_--)
        solve();
}