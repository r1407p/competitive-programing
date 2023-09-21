#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define pii pair<int,int>
#define data array<int,3>
double dist(data a,data b){
    return sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
}




void __solve(){
    int n,m,p;
    cin >> n >> m >> p;
    vector<data> repo(n);
    vector<data> tar(m);
    vector<data> sto(p);
    for(int i = 0; i < n; i++){
        cin >> repo[i][0] >> repo[i][1];
        repo[i][2] = 0;
    }
    for(int i = 0; i < m; i++){
        cin >> tar[i][0] >> tar[i][1];
        tar[i][2] = 0;
    }
    for(int i = 0; i < p; i++){
        cin >> sto[i][0] >> sto[i][1];
        sto[i][2] = 0;
    }
    double res = 0;
    vector<vector<double>> temp1;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            temp1.push_back({dist(repo[i],tar[j]),i*1.0,j*1.0});
        }
    }
    sort(temp1.begin(),temp1.end());
    vector<bool> used1(n,false);
    vector<bool> used2(m,false);
    for(auto &x: temp1){
        if(!used1[x[1]] && !used2[x[2]]){
            used1[x[1]] = true;
            used2[x[2]] = true;
            res += x[0];
        }
    }
    vector<vector<double>> temp2;
    for(int i =0;i<n;i++){
        for(int j = 0; j < p; j++){
            temp2.push_back({dist(repo[i],sto[j]),i*1.0,j*1.0});
        }
    }
    sort(temp2.begin(),temp2.end());
    vector<bool> used3(n,false);
    vector<bool> used4(p,false);
    for(auto &x: temp2){
        if(!used3[x[1]] && !used4[x[2]]){
            used3[x[1]] = true;
            used4[x[2]] = true;
            res += x[0];
        }
    }
    cout <<fixed<< setprecision(10) << res << endl;
}
signed main(){
    __solve();
}