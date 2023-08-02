//20:17
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
int get(pii t, int i ){
    return max(0,t.first-t.second*(i-1));
}
void _solve(){
    int n,m;
    cin >> n>>m;
    vpii nums(n+1);
    for(int i = 1;i<=n;i++){
        cin >> nums[i].first>>nums[i].second;
    }
    vvpii edges(n+1);
    for(int i =0;i<m;i++){
        int a,b,h;
        cin >> a >>b>>h;
        edges[a].pb({b,h});
        edges[b].pb({a,h});
    }
    vvi dp(1010,vi(n+1,-1));
    dp[1][1] = nums[1].first;
    int res = dp[1][1];
    for(int i = 1;i<1010;i++){
        for(int j = 1;j<=n;j++){
            if(dp[i][j]>=0){
                for(auto e:edges[j]){
                    int next = e.first;
                    int day = e.second+i;
                    if(day<1010){
                        dp[day][next] = max(dp[day][next],dp[i][j]+get(nums[next],day));
                        res = max(res,dp[day][next]);
                    }
                }
            }
        }
    }
    cout << res<<endl;
}
signed main(){
    // ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    // cin >>_;
    while(_--){
        _solve();   
    }

}