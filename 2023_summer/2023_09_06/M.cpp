#include <bits/stdc++.h>
using namespace std;
fstream fin("chess.in");
#define int long long

void solve(){
    int n,k;
    fin >> n >>k;
    int res = 0;
    int len = k+1;
    int block = n/k;
    int remain = n-n/k;
    int round = block;
    int rest = remain;
    int num = n%len;
    int rest = len-num;
    res+= round*(len*block+remain);
    res+= remain*(block+1ll);
    cout <<n*n-res<<endl;;
}
signed main(){
    int _;
    fin >>_;
    while(_--)
        solve();
}