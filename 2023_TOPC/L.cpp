#include <bits/stdc++.h>
using namespace std;
#define pb push_back

void solve(){
    int n;
    cin >>n;
    
    vector<pair<int,int>> a;
    vector<pair<int,int>> b;
    

    for(int i = 0;i<n;i++){
        int x,y;
        cin >> x>>y;
        a.emplace_back(x,y);
        b.emplace_back(y,x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int res1;
    int res2;
    res1 = a[(n-1)/2].first;
    res2 = b[(n-1)/2].first;
    cout <<res1<<" "<<res2<<endl;


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    while(_--)
        solve();   
    return 0;
}