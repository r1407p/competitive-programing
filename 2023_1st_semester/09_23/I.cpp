#include <bits/stdc++.h>
using namespace std;
void __solve(){
    int n;
    cin>> n ;
    vector<pair<int,int>> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i].first;
        v[i].first -=1;
        v[i].second = i-v[i].first;
    }
    // for(auto x:v){
    //     cout << x.first << " " << x.second << endl;
    // }
    vector<int> tmp;
    sort(v.begin(),v.end());
    for (auto x:v){
        tmp.push_back(x.second);
    }
    vector<int> now;
    for(auto x:tmp){
        auto temp = upper_bound(now.begin(),now.end(),x);
        if(temp==now.end()){
            now.push_back(x);
        }else{
            *temp = x;
        }
    }
    cout << now.size();
}
signed main(){
    int _ = 1;
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cin >> _;
    __solve();
}