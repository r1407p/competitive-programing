#include <bits/stdc++.h>

using namespace std;


int a[6][5];

void __solve(){
    int n ;
    cin >>n;
    vector<pair<double,string>> ans;
    for(int i = 0; i < 6; i++) {
        string s; 
        cin >> s;
        int a,b,c,d,e;
        cin >> a>>b>>c>>d>>e;
        double temp = 0.56*d+0.24*c+0.14*b+0.06*a+0.3*e;
    //    cout << temp<<" "<<s<<'\n';
        ans.push_back({temp,s});
    }
    sort(ans.rbegin(),ans.rend());
    
    int sol = n /6;
    for(int i =0;i<n%6;i++){
        if(ans[i].second=="Taiwan"){
            sol++;
        }
    }
    cout<< sol<<'\n';
}

signed main(){
    int __ = 1;
    //cin >>__;
    while(__--){
        __solve();
    }
}

