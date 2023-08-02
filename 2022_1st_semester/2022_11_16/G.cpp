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
    int n;cin >>n;
    vs names(n);
    for(int i =0;i<n;i++)cin >> names[i];
    vvi now(n,vi(2));
    for(int i =0;i<n;i++)now[i][0] = 0,now[i][1] = i;
    int m ;cin >> m;
    for(int i =0;i<m;i++){
        int a,b;
        cin >>a>>b;
        a--,b--;
        now[a][0] = now[b][0]+1;
        now[a][1] = now[b][1];
    }
    while(now[0][0]--)cout << "I_love_";
    cout << names[now[0][1]]<<endl;;
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