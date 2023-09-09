#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
const int maxn = 1e6+5;
const int mod = 1e9+7;
// #define data array<int,3>;
#define int long long 
vi dp(10000+1,0);
vi from(10000+1,0);
vi res(11);
vi a(11);

void __solve(){
    int n;
    bool inf = false;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==0)
            inf = true;
    }
    int b;
    cin >> b;
    dp[0] = 1;
    for(int i  = 0;i<n;i++){
        if(a[i]==0)continue;
        for(int j = a[i];j<=b;j++){
            if(dp[j-a[i]]!=0){
                dp[j] += dp[j-a[i]];
                dp[j]%= mod;
                from[j] = i;
            }
        }
    }
    if(dp[b]== 0 ){
        cout << 0 <<endl;
    }
    if(inf)
        cout << "infinite"<<endl;
    else
        cout << dp[b]<<endl;
    int start  =b;
    while(start){
        res[from[start]]++;
        start -= a[from[start]];
    }
    for(int i = 0;i<n;i++){
        cout << res[i]<<" ";
    }
}


signed main(){
    __solve();
}