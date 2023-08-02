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
int query(vi &dp,int x,vvi &nums, vi &res){
    if(dp[x]!=-1)return dp[x];
    if(nums[x].size()==0)return res[x];
    int ans =0;
    for(auto t:nums[x])ans+=query(dp,t,nums,res);
    dp[x] = min(ans,res[x]);
    return dp[x];

}
void _solve(){
    int k,n;
    cin >> n>>k;
    vi res(n);
    vi p(k);
    queue<int> qu;
    vvi effect(n);
    for(int i =0;i<n;i++)cin>> res[i];
    for(int i =0;i<k;i++){
        cin >> p[i];
        p[i]-=1;
        res[p[i]]= 0;
    }
    vvi nums(n);
    for(int i =0;i<n;i++){
        int t;
        cin >> t;
        if(t){
            int cost = 0;
            for(int j =0;j<t;j++){
                int temp;
                cin >> temp;
                
                temp-=1;
                // cost+=res[temp];
                // // cout << temp;
                // effect[temp].pb(i);
                nums[i].pb(temp);
            }
            // if(cost<res[i]){
            //     res[i] = cost;
            //     qu.push(i);
            // }
        }
    }
    vi dp(n+1,-1);
    for(int i =0;i<n;i++){
        cout << query(dp,i,nums,res)<<" ";
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