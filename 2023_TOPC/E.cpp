#include <bits/stdc++.h>
using namespace std;
#define pb push_back

typedef long long loli;

loli alpha,Beta,md;
inline loli mod(loli x){
    return (x%md+md)%md;
}

unordered_map<loli,loli> mp;

loli sol(loli x){
    if(x==1)
        return alpha;
    if(mp.count(x))
        return mp[x];
    loli h=x>>1;
    loli a=sol(h);
    if(x&1){
        loli b=sol(h+1);
        return mp[x]=mod(mod(a*b)-alpha);
    }
    return mp[x]=mod(mod(a*a)-2);
}

void solve(){
    cin>>alpha>>Beta>>md;
    alpha %= md;
    cout<<sol(Beta)<<endl;


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    while(_--)
        solve();   
    return 0;
}