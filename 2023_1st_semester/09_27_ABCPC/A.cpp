#include<bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int n ;
    cin >> n;
    int res = 0;
    int i = 1;
    while(i*i<=n){
        if(n%i==0){
            res+=1;
        }
        i++;
    }
    i-=1;
    if(i*i==n){
        res*=2;
        res-=1;
        cout << i << " " << res << '\n';
    }else{
        cout << n << " " << res << '\n';
    }

    // cout <<n<<" "<< res << '\n';
}
signed main(){
    solve();
}

