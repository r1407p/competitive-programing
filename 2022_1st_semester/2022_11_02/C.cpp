#include<bits/stdc++.h>
 
 
using namespace std;


//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()
#define rALL(X) X.rbegin(), X.rend()
typedef long long loli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<loli,loli> pll;
typedef pair<pll,pll> pllll;
typedef string str;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<loli> vl;
typedef vector<vl> vvl;
typedef vector<vvl> vvvl;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<ld> vld;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<str> vs;
#define maxn 200005
//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
void _solve(){
    str a,b;
    cin >> a>>b;
    if(a==b){
        cout<<a;
        cout<<'a';
        return;
    }
    int len = a.size();
    int i =0;
    int j =len-1;
    for(;i<len;i++){
        if(a[i]!=b[i])break;
    }
    for(;j>=0;j--){
        if(a[j]!=b[j])break;
    }
    if(a.substr(i+1,j-i)==b.substr(i,j-i)){
        cout << a.substr(0,i)<<a[i]<<b.substr(i,j-i)<<b[j]<<b.substr(j+1);
    }else if(a.substr(i,j-i)==b.substr(i+1,j-i)){
        cout << a.substr(0,i)<<b[i]<<a.substr(i,j-i)<<a[j]<<b.substr(j+1);
    }else cout << "IMPOSSIBLE";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}