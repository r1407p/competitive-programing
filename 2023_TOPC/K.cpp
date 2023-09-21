#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >>s;
    int n = s.size();
    int res = 0;
    for(int i =0;i<n-3;i++){
        if(s[i]=='k'&&s[i+1]=='i'&&s[i+2]=='c'&&s[i+3]=='k'){
            res++;
        }
    }
    cout <<res<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    while(_--)
        solve();   
    return 0;
}