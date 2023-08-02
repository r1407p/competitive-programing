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
ifstream fin("test.in");
//ofstream fout("test.out");
bool flag = false;
int n, d;
void check(const vvi &nei,const vvi&t){
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(nei[i][j]!=t[i][j])return;
        }
    }
    flag = true;
}
void dfs(const vvi&s,const vvi &t,int now,int r,int c){
   // cout <<now<<endl;;
    if(now>d)return;
    vvi nei(n,vi(n,0));
   // cout << "dfs"<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
        //    cout << i<<j<<endl;
            if(s[i][j]){
                for(int k =-1;k<=1;k++){
                    for(int l =-1;l<=1;l++){
                        int a = i+k;
                        int b = j+l;
                        if(a>=0&&b>=0&&a<n&&b<n){
                            nei[a][b]++;
                           // cout << a<<" "<<b<<endl;
                        }
                    }
                }
            }
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(s[i][j]){
                if(nei[i][j]==3||nei[i][j]==4)nei[i][j] = 1;
                else nei[i][j] = 0;
            }else{
                if(nei[i][j]==3)nei[i][j] =1;
                else nei[i][j] =0;
            }
        }
    }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout << nei[i][j]<<" ";
    //     }
    //     cout << endl;
    // }
    
    for(int k =-1;k<=1;k++){
        for(int l =-1;l<=1;l++){
            int a = r+k;
            int b = c+l;
            if(l&&k&&a>=0&&b>=0&&a<n&&b<n){
                int temp = nei[a][b];
                nei[a][b] = 0;
                
                check(nei,t);
                if(flag)return;
                dfs(nei,t,now+1,a,b);
                nei[a][b] = temp;
            }
        }
    }
}
void _solve(){
    int r,c;
    fin >> n>>d>>r>>c;
    vvi s(n,vi(n,0));
    vvi t(n,vi(n,0));
    cout <<n<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            char c;
            fin >> c;
            s[i][j] = c-'0';
        }
    }
 //   cout <<"Dfa"<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            char c;
            fin >> c;
            t[i][j] = c-'0';
        }
    }
   // cout <<"Dfa"<<endl;
    check(s,t);
    //cout <<"Dfa"<<endl;
    dfs(s,t,1,r,c);
    if(flag)cout << "Yes";
    else cout << "No";

}
signed main(){
    //ios_base::sync_with_stdio(false);
   // cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}