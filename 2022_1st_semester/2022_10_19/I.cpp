#include<bits/stdc++.h>
 
 
using namespace std;


//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()

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
#define maxn 505
bool join[maxn][maxn];
vs strs(maxn);
void _solve(){
    int n;
    cin >>n;
    for(int i =0;i<n;i++){
        cin >>strs[i];
    }
    int sz = strs[0].size();
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            if(i==j){
                join[i][j] =1;
                continue;
            }
            int temp =0;
            for(int k =0;k<sz;k++){
                if(strs[i][k]!=strs[j][k]){
                    temp++;
                    if(temp==3){
                        join[i][j] = true;
                        join[j][i] = true;
                    }
                }
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout << join[i][j]<<' ';
        }
        cout <<endl;
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