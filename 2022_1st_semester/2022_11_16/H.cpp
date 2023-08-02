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
int n ,m;
vvi chess(1005,vi(1005));
int sol(int x, int y) {
  int ans = 0;
  for(int i = 1; i <= n; i ++) {
    for(int j = 1; j <= m; j ++) {
      if(i == x || j == y) continue;
      ans = max(ans, chess[i][j]);
    }
  }
  return ans;
}
void _solve(){
    cin >>n>>m;
    int mx =0;
    int a,b;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            cin >> chess[i][j];
            if(chess[i][j]>mx) mx = chess[i][j],a = i,b = j;
        }
    }
    //cout <<a<<b;
    int ans1 = sol(a,b);
    //cout <<ans1;
    int a2 = a;
    int b2;
    int temp = sol(a,0);
    //cout <<temp<<endl;
    for(int i =1;i<=n;i++){
        if(i==a)continue;
        for(int j =1;j<=m;j++){
            if(chess[i][j]==temp){
                b2 = j;   
            }
        }
    }
    int ans2 = sol(a2,b2);
    //cout <<a2<<b2;
    int a3;
    int b3 = b;
    temp = sol(0,b);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            if(j==b)continue;
            if(chess[i][j]==temp){
                a3 = i;   
            }
        }
    }
    int ans3 = sol(a3,b3);
    if(ans1<ans2){
        if(ans1<ans3)cout <<a<< " "<<b;
        else{
            cout <<a3<<" "<<b3<<endl;
        }
    }else{
        if(ans2<ans3)cout <<a2<<" "<<b2<<endl;
        else{
            cout << a3<<" "<<b3<<endl;
        }
    }
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