#include<bits/stdc++.h>

using namespace std;

typedef long long loli;
typedef vector<loli> vl;
typedef vector<bool> vb;
// range(0,5) xor range(0,3) = range(4,5)
void solve(){
    int n,k;
    cin>>n>>k;
    vl arr(n);
    loli cur=0;
    vb pref(1024,false), exist(1024,false);
    pref[0]=true;
    for(auto&x:arr) 
        cin>>x,pref,cur^=x,pref[cur]=true;
    for(int i=0;i<1024;++i)
        for(int j=0;j<1024;++j)
            if(pref[i]&pref[j])
                exist[i^j]=true;
    int maxx=0;
    for(int i=0;i<1024;++i)if(exist[i]){
        maxx=max(maxx,i);
        for(int j=0;j<1024;++j)if(__builtin_popcount(j)==k)
            maxx=max(maxx,i^j);
    }
    cout<<maxx<<endl;

}

int main(){
    int _;
    cin>>_;
    while(_--)
        solve();
}
