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
int dsu_get(int x,vi &)
void _solve(){
    int n,m;
    cin >> n >>m;
    vi nums(n+1);
    for(int i = 1;i<n;i++){
        cin >> nums[i];
    }
    vvi edges(m);
    for(int i =0;i<m;i++){
        int a,b;
        cin >> a>>b;
        edges[i] = {max(nums[a],nums[b]),a,b};
    }
    sort(ALL(edges));
    int t;
    cin >> t;
    vvi query(t);
    for(int i =0;i<t;i++){
        int a,b,e;
        cin >> a>>b>>e;
        e+=nums[a];
        query[i] = {e,a,b,i};
    }
    sort(ALL(query));
    vb res(t);
    int j =0;
    for(int i =0;i<t;i++){
        while(j<m && query[i][0]>=edges[j][0]){
            
        }



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