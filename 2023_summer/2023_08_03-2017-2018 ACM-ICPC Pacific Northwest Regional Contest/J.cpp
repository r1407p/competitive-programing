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
int m,n;
vs grid(30);
bool draw(int ii,int jj,bool is_b){
    // cout << ii<<" "<<jj<<endl;
    if(is_b){
        for(int i =0;i<=ii;i++){
            for(int j =0;j<=jj;j++){
                if(grid[i][j]=='R'){
                    return false;
                }
                grid[i][j]='B';
            }
        }
    }else{
        for(int i =ii;i<m;i++){
            for(int j =jj;j<n;j++){
                if(grid[i][j]=='B'){
                    return false;
                }
                grid[i][j]='R';
            }
        }
    }
    return true;
}
void _solve(){
    cin >> m>>n;
    for(int i =0;i<m;i++){
        cin >> grid[i];
    }
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j]=='B'&&!draw(i,j,1)){
                cout << 0<<endl;
                return;
            }
            if(grid[i][j]=='R'&&!draw(i,j,0)){
                cout << 0<<endl;
                return;
            }
        }
    }
    // for(int i =0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout <<grid[i][j]<<" ";
    //     }cout <<endl;
    // }
    vvi dp(m+1,vi(n+1,0));
 
    for(int i =m-1;i>=0;i--){
        for(int j =0;j<n;j++){
            if(grid[i][j]=='.'){
                int a = 1;
                int b = 1;
                if(i+1<m)a = dp[i+1][j];
                if(j-1>=0)b = dp[i][j-1];
                dp[i][j] = a+b;
            }
            else if(grid[i][j]=='B'){
                int a = 1;
                int b = 1;
                if(i+1<m)a = dp[i+1][j];
                if(j-1>=0)b = dp[i][j-1];
                dp[i][j] = a;
            }else{
                int a = 1;
                int b =1;
                if(i+1<m)a = dp[i+1][j];
                if(j-1>=0)b = dp[i][j-1];
                dp[i][j] = b;
            }
        }
    }
    cout << dp[0][n-1];
 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    // cin >>_;
    while(_--){
        _solve();   
    }
 
}