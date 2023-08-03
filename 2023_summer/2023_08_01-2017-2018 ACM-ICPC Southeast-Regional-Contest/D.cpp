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
#define maxn 2005

//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
vvi dp(maxn,vi(maxn,-2));
vs nums(maxn);
    int n,k;
int query(int a, int b){
    if(dp[a][b]!=-2){
        return dp[a][b];
    }
    // cout << a<<" "<<b<<endl;;
    if(nums[a][b]=='#'){
        dp[a][b] = -1;
        return -1;   
    }
    int mn = INT_MAX;
    for(int i =1;i<=k;i++){
        int temp;
        if(a-i>=0){
            int temp = query(a-i,b);
            if(temp!=-1){
                mn = min(mn,temp);
            }
        }
        if(b-i>=0){
            int temp=  query(a,b-i);
            if(temp!=-1){
                mn = min(mn,temp);
            }
        }
    }
    // cout << mn<<endl;
    if(mn ==INT_MAX){
        dp[a][b]= -1;
        return -1;
    }
    dp[a][b] = mn+1;
    return mn+1;
}
void _solve(){
    cin >> n>>k;
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    dp[0][0]=0;
    cout <<query(n-1,n-1);
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