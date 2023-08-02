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
#define maxn 1005
#define mod 7901
int a[maxn];
int per[maxn];
void _solve(){
    int n;
    cin >> n;
    vi nums(n,0);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    sort(ALL(nums));
    int ans =1;
    int cnt =1;
    for(int i = 1;i<n;i++){
        if(nums[i]==nums[i-1])cnt++;
        else{
            ans*=per[cnt];
            ans%=mod;
            cnt = 1;
        }
    }
    ans*=per[cnt];
    ans%=mod;
    cout << ans<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    per[0] = 1;
    for(int i =1;i<=1000;i++){
        per[i] = per[i-1]*i;
        per[i]%=mod;
    }
    while(_--){
        _solve();   
    }
}