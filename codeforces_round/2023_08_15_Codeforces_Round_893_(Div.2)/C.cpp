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
    
    int n;
void dfs(int start,vi &res,vi&used,vvi&nums){
    
    used[start]  = true;
    if(start<=n)
        res.pb(start);
    for(auto to : nums[start]){
        if(!used[to]){
            dfs(to,res,used,nums);   
            break; 
        }
    }
    
}
void _solve(){
 
    cin >> n;
    vi res;
    vi used(n+1+n);
    vvi nums(n+1+n);
    
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j+=i){
            nums[j].pb(n+i);
            nums[n+i].pb(j);
        }
    }
    for(int i = 1;i<=n;i++){
        if(!used[i]){
            dfs(i,res,used,nums);
        }
    }
    for(int i = 0;i<n;i++){
        cout <<res[i]<<" ";
    }cout << endl;
    
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