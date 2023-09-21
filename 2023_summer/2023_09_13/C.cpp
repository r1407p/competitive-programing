#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define  vi vector<int>
#define pb push_back
int n,k;

vi next(vi nums){
    map<int,int> mp;
    vi nums2;
    for(int i =0;i<n;i++){
        mp[nums[i]]++;
    }
    for(int i =0;i<n;i++){
        nums2.pb(mp[nums[i]]);
    }
    return nums2;
}
void __solve(){
    cin >> n>>k;
    vi nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    for(int i =0;i<k;i++){
        vi temp = next(nums);
        if(temp == nums){
            nums = temp;
            break;
        }
        nums = temp;
    }
    for(int i =0;i<n;i++){
        cout << nums[i]<<" ";
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