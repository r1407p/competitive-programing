#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ALL(x) x.begin(),x.end()
// #define int long longz
#define site1 "TAOYUAN"
#define site2 "JAKARTA" 



void solve(){
    long long a,b;
    double c,d;
    cin >> a>>b>>c>>d;
    double v1 = (a-1)*1.0/c;
    double v2 = (b-1)*1.0/d;
    if(v1<v2){
        cout << "TAOYUAN"<<endl;
    }else if(v1>v2){
        cout << "JAKARTA"<<endl;
    }else{
        cout <<"SAME"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    while(_--)
        solve();   
    return 0;
}
