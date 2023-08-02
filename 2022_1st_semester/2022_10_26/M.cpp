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
#define maxn 500005
//int a[maxn];
vvi af;
vi front;
vector<set<int>> val;
void _solve(){
    int n,k,m;
    cin >> n>>k>>m;
    af.resize(n+1);
    val.resize(n+1);
    front.resize(n+1);
    for(int i =0;i<m;i++){
        int a,b;
        cin >> a>>b;
        af[a].eb(b);
    }
    for(int i =1;i<=n;i++){
        if(!front[i]){
            for(int j =1;j<=k;j++){
                val[i].insert(j);
            }
            //cout <<i<<" ";
        }
    }
    //cout <<endl;
    
    for(int i =0;i<n*k;i++){
        int now;
        cin >>now;
        cout << front[now]+1<< " ";
        front[now]++;


        // int now;
        // cin >> now;
        // int output = *(val[now].begin());
        // cout << output<<" ";
        // //system("pause");
        // // val[now].pop();
        // val[now].erase(val[now].begin());
        // for(int j =0;j<af[now].size();j++){
        //     val[af[now][j]].insert(output);
        // }
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