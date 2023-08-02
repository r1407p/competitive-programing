#include <bits/stdc++.h>
#define int long long
#define double long double
#define Nanase_Kurumi_aka_menhera_chan_is_mine ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define ALL(i) i.begin(),i.end()
#define gcd(i,j) __gcd(i,j)
#define fi first
#define se second
//#define X first
//#define Y second
#define eps 0.00000001
#define ist insert
//#define mul(a,b,c) (a%c)*(b%c)%c
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC optimize("O2")
int max(int x,int y){return x>=y?x:y;}
int min(int x,int y){return x>=y?y:x;}
using namespace std;
typedef long long ll;
const int N=10000005;

 
int isp[N];
int low[N]{};
void build(){
    fill(isp,isp+N,1);
    for (int i=2;i<N;i+=1)
        if (isp[i]){
            for (int j=i*i;j<N;j+=i){
                if (low[j]==0) low[j]=i;
                isp[j]=0;
            }
        }
}
void sol(){
    int x,y;
    cin >>x>>y;
    int d=y-x;
    if (d==1) cout <<"-1\n";
    else if (y%x==0) cout <<"0\n";
    else{
        cout <<low[d]-max(x%low[d],y%low[d])<<'\n';
    }
}
signed main(){
    int _=1;build();
    cin >>_;
    while (_--) sol();
    return 0;
}