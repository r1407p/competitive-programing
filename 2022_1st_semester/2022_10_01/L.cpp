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
    int n,m,x,y;
    cin >> n>>m>>x>>y;
    vi nums(m+2,0);
    for(int i =1;i<=m;i++)cin >> nums[i];
    nums[m+1] = n+1;
    loli ans =0;
    loli last = x;
    for(int i =1;i<m+2;i++){
        int l = nums[i-1]+1;
        int r = nums[i];
        ans+=(r-l)/(y+2)*2;
        int temp = (r-l)%(y+2);
        if(temp>last){
            temp -=last;
            ans++;
            temp--;
        }
        last = min(x,y-temp);
    }
    cout << ans;
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