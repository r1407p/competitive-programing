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
ofstream fout("test.out");
typedef  __int128 ll;
ll M = 1000000000000000031;
ll g = 42;
ll a = 960002411612632915;
ll sol(ll now){
    ll ans = 1% M;
    ll base = 42;
    while(now){
        if(now%2)ans*=base,ans%=M;
        base*=base;
        base%=M;
        now/=2;
    }
    return ans;
}
ll print(ll now){
    if(now<0){
        cout << '-';
        now *=-1;
    }
    if(now>9)print(now/10);
    char temp = now%10+'0';
    cout << temp;
}
void _solve(){
    int n ;
    cin >> n;
    ll ans = 300;
    for(int i = 999999;i>=n;i--){
        ans = sol(ans);
    }
    print(ans);
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