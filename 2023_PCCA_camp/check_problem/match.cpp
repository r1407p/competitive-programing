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
    int n,m;
    cin >>n >> m;
    vector<vector<char>> ans(n,vector<char>(m,'F'));
    for(int i=0;i<n;i++){
        if(i&1){
            ans[i][0] = 'B';
            ans[i][m-1] ='D';
        }
        else{
            ans[i][0] = 'A';
            ans[i][m-1] = 'C';
        }
    }
    vector<vector<char>> mp(n,vector<char>(m));
    int num =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mp[i][j];
            if(mp[i][j]!='#'){
                num++;
            }
        }
    }
    int now = 0;
    int i =0,j = 0;
    bool flag = false;
    while(i<n){
        if(flag){
            if(mp[i][j]!='#')
                mp[i][j] = ans[i][j];
        }
        if(mp[i][j]=='#'){
            flag = !flag;
        }
        if(i&1){
            if(j==0)
                i++;
            else if(j==m-1)
                j--;
            else
                j--;
        }else{
            if(j==0)
                j++;
            else if(j==m-1)
                i++;
            else
                j++;
        }
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << mp[i][j];
        }cout << endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }
}