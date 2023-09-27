#pragma("Ofast")
#include <bits/stdc++.h>
using namespace std;
// #define mp make_pair
vector<int> opow(32);
void pre(){
    for(int i=0;i<32;++i)
        opow[i]=1<<i;
}
void __solve(){
    int n;
    cin >> n;
    vector<int> v;
    int now=0;
    int mx=0;
    int mx_ind=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==0) continue;
        v.push_back(temp);
        now|=temp;
    }
    n = v.size();

    mx_ind = 31-__builtin_clz(now);
    mx = opow[mx_ind+1]-1;

    vector<int> dp(31,32);
    for(int i =0;i<n;i++){
        int now =-1;
        for(int j=0;j<=30;j++){
            if(opow[j]>v[i])
                break;
            if(v[i]&opow[j]){
                now = j;
            }else{
                dp[j] = min(dp[j],now);
            }
        }
    }
    int res=0;
    for(int i=mx_ind;i>=0;i--){
        if((now&opow[i])==0){
            res++;
            i=dp[i]+1;
        }
    }
    if(mx==0){
        cout <<0 <<' '<<0<<endl;
        return;
    }
    cout <<mx<<" "<<res<<endl;
}

signed main(){
    pre();
    ios_base::sync_with_stdio(false);cin.tie();
    int _ = 1;
    cin >> _;
    while(_--)
        __solve();
}

