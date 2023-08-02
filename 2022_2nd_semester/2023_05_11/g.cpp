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
ifstream fin("milk.in");
//ofstream fout("test.out");
void _solve(){
    int n,q;
    fin >> n >>q;
    n = n+1;
    vi nums(n,0);
    int mx = 0;
    for(int i = 1; i< n;i++){
        fin >> nums[i];
        mx = max(mx,nums[i]);
    }
    vi up(n);
    up[0] = nums[0];
    for(int i =1;i<n;i++){
        up[i] = max(nums[i],up[i-1]);
    }
    vi low(n);
    low[n-1] = nums[n-1];
    for(int i = n-2;i>=0;i--){
        low[i] = min(nums[i],low[i+1]);
    }
    for(int i =0;i<n;i++){
        cout << low[i]<<" ";
    }
    for(int i = 0 ;)

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    fin >>_;
    while(_--){
        _solve();   
    }

}