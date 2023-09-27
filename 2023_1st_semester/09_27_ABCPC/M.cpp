#include<bits/stdc++.h>
typedef long long loli;
using namespace std;
void solve(){
    loli m,n;
    cin>>m>>n;
    if(m==0 and n==0)
        return cout<<0<<endl,void();
    loli tm=m<0?-m:m;
    loli tn=n<0?-n:n;
    if((tm+tn)%2==1)
        return cout<<-1<<endl,void();
    loli a=(m+n)/2;
    loli b=(m-n)/2;
    if(b==0)
        return cout<<1<<' '<<a<<endl,void();
    else
        return cout<<2<<' '<<a<<' '<<b<<endl,void();

}
int main(){
    int _;
    cin>>_;
    while(_--)
        solve();
}
