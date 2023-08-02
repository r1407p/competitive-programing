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
ifstream fin("Wigz.in");
//ofstream fout("test.out");
void _solve(){
    int n,m,k;
    fin >> n >>m>>k;
    vvi grid(n,vi(m));
    vi a(m,0);
    vi b(n,0);
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            fin >> grid[i][j];
            b[i]+=grid[i][j];
            a[j]+=grid[i][j];
        }
    }
    int ans = 0;
    if(k>=n || k>=m){
        for(int i = 0;i<m;i++){
            ans+=a[i];
        }
        cout << ans <<endl;
        return;
    }
    vpii col;
    for(int i =0;i<n;i++){
        col[i] = {a[i],i};
    }
    sort(rALL(col));
    for(int i =0;i<k;i++){
        ans+=col[i].first;
        for(int j =0;k<n;j++){
            b[j]-=grid[j][col[i].second];
        }
    }
    int mx = ans;
    for(int i = 0;i<k;i++){
        ans-=col[k-1-i].first;
        for(int j =0;j<n;j++){
            if(b[j]==-1)ans+=grid[j][col[k-1-i].second];
            else b[j]+=grid[j][col[k-1-i].second];
        }
        int now = 0;
        int ind = 0;
        for(int j = 0;j<n;j++){
            if(b[j]>now){
                now = b[j];
                ind = j;
            }
        }
        b[ind] = -1;
        ans+=now;
        mx = max(ans,mx);
    }
    cout << mx<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    fin >>_;
    cout <<_;
    while(_--){
        _solve();   
    }

}