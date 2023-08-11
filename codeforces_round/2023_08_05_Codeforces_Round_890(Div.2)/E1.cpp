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
vi nums(maxn+1);
vvi childrens(maxn+1);
vi des(maxn+1);
int res = 0;
int get_des(int i){
    if(childrens[i].size()==0){
        des[i] = 1;
        return 1;
    }
    int temp  =1;
    for(int j =0;j<childrens[i].size();j++){
        temp+= get_des(childrens[i][j]);
    }
    des[i] = temp;
    return temp;
}
int get_nums(int i ){
    int target = (des[i] -1)/2;
    vector<bool> dp(target+1);
    dp[0] = true;
    int mx =0 ;
    for(int j =0;j<childrens[i].size();j++){
        int now = des[childrens[i][j]];
        for(int k =target;k>=now;k--){
            if(dp[k-now]){
                dp[k] = true;
                mx = max(mx,k);
            }
        }
    }
    // cout << i <<" "<<mx*(des[i]-1-mx)<<endl;
    return mx*(des[i]-1-mx);
}
void dfs(int i){
    res+= get_nums(i);
    for(int j =0;j<childrens[i].size();j++){
        dfs(childrens[i][j]);
    }
}
void _solve(){
    int n;
    cin >> n;
    
    for(int i = 2;i<=n;i++){
        cin >> nums[i];
        childrens[nums[i]].pb(i);
    }
    get_des(1);
    // for(int i =1;i<=n;i++){
    //     cout << des[i]<< " ";
    // }
    dfs(1);
    cout << res<< endl;
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