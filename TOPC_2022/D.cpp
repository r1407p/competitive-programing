#include <bits/stdc++.h>

using namespace std;


int a[6][5];
vector<int> l[100005];
int del[100005];

void __solve(){
    int n ;
    cin >>n;
    vector<int>temp;
    for(int i =0;i<n;i++){
        int _;
        cin >>_;
        temp.push_back(_);
    }
    int pivot = -2;
    bool flag = false;
    vector<int> nums;
    for(int i =0;i<n;i++){
        if(temp[i]==0){
            if(pivot != -2){
                cout <<-1<<'\n';
                return;
            }
            pivot = i;
        }
    }
    if(pivot !=-2){
        for(int i = pivot;i<n;i++){
            nums.push_back(temp[i]);
        }
        for(int i =0;i<pivot;i++){
            nums.push_back(temp[i]);
        }
    }else{
        cout << "-1\n";
        return;
    }
    for(int i = 1; i < n; i++) {
        l[nums[i]].push_back(i);
    }
    set<int> vec;
    memset(del, -1, sizeof(del));
    vec.insert(0);
    vec.insert(n);
    del[0] = del[n] = 0;
    vector<pair<int, int>> ans;
    for(int i = 1; i < n; i++) {
        vector<int> tmp;
        for(auto x : l[i]) {
            auto ub = vec.upper_bound(x);
            int b = *ub;
            int a = *(--ub);
            // cout << x << ' ' << a << ' ' << b << '\n';
            if(del[a] == i-1) {
                del[x] = i;
                tmp.push_back(x);
                ans.push_back({a, x});
            }
            else if(del[b] == i-1) {
                del[x] = i;
                tmp.push_back(x);
                ans.push_back({b, x});
            }
            else {
                cout << "-1\n";
                return;
            }
        }
        for(auto x : tmp) {
            vec.insert(x);

        }
    }
    // cout << "===\n";
    for(auto [x, y] : ans) {
        int a, b;
        if(x < n-pivot) a = x + pivot;
        else a = x - n + pivot;
        if(y < n-pivot) b = y + pivot;
        else b = y - n + pivot;
        // cout << x << ' ' << y << '\n';
        cout << ++a << ' ' << ++b << '\n';
    }











    temp.clear();
    if(pivot!=-2){
        for(int i =n-pivot;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i =0;i<=n;i++){
            temp.push_back(nums[i]);
        }
    }
    // for(int i =0;i<n;i++){
    //     cout <<temp[i]<<' ';
    // }
}

signed main(){
    int __ = 1;
    //cin >>__;
    while(__--){
        __solve();
    }
}
