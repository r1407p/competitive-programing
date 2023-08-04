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
void _solve(){
    int n,m;
    cin >> n>>m;
    vvi col(n,vi(m));
    vvi row(n,vi(m));
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> row[i][j];
            cin >> col[i][j];
        }
    }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         cout << row[i][j]<<" ";
    //     }cout << endl;
    // }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(j==0){
                if(i==0){
                    continue;
                }
                int target = row[i][j];
                // cout << i <<" "<<j <<" "<<target<<endl;
                row[i][j]-=target;
                col[i][j]+=target;
                row[(i+1)%n][j]+=target;
                col[i][(j+1)%m]-=target;
                // cout << row[i][j]<<" "<<col[i][j]<<" "<< col[i][(j+1%m)]<<" "<<row[(i+1)%n][j]<<endl;
                 
            }else{
                int target = col[i][j];
                // cout << i <<" "<<j <<" "<<target<<endl;
                col[i][j]-=target;
                row[i][j]+=target;
                row[(i+1)%n][j]-=target;
                col[i][(j+1)%m]+=target;
                // cout << row[i][j]<<" "<<col[i][j]<<" "<< col[i][(j+1%m)]<<" "<<row[(i+1)%n][j]<<endl;
            }   
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(row[i][j]!=0 || col[i][j]!=0){
                cout <<"No\n";
                return;
            }
        }
    }
    cout <<"Yes\n";

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