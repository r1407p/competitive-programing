#include<bits/stdc++.h>
 
 
using namespace std;


#define int long long 
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
#define mod 1000000007
vvi dp(115,vi(10105,0));
void _solve(){
    int n ,w,h;
    cin>> n>>w>>h;
    //cout <<"dfsa";
    for(int i = 0; i <= h; ++i) {
        dp[1][i] = 1;
    }
    int m;
    for(int i =1;i<=w;i++){
        int m = (i+1)*h;
        for(int j = 0; j <= n && j <= m; ++j) {
            for(int k = 0; k <= h; ++k) {
                if(j-k < 0) break;
                dp[i+1][j] += dp[i][j-k];
                dp[i+1][j]%=mod;
                
            }
        }
    }
    int ans =0;
    for(int i =0;i<=n;i++){
        ans+=dp[w][i];
        ans%=mod;
    }
    ans-=1;
    ans = (ans-min(n/w,h)+mod)%mod;
    cout<< ans<<endl;
}
signed main(){
    //ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}