#include <bits/stdc++.h>
using namespace std;

void solve(){
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    if(m>=10){
        cout <<"TOO LATE"<<endl;
        return;
    }
    if(m<9){
        cout <<"GOOD"<<endl;
        return;
    }
    if(d>16){
        cout <<"TOO LATE"<<endl;
        return;
    }else{
        cout <<"GOOD"<<endl;
        return;
    }
}
signed main() {
    int _ = 1;
    while(_--)
        solve();   
    return 0;
}