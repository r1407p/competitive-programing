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
loli GCD(loli a, loli b){
    if(b==0)return a;
    else return GCD(b,a%b);
}
void _solve(){
    int n ,x,y;
    cin>>n>>x>>y;
    vl nums(n);
    for(int i =0;i<n;i++){
        cin >>nums[i];
    }
    if(y%x){
        cout <<"-1\n";
        return;
    }
    if(n==1&&x!=y){
        cout <<"-1\n";
        return;
    }
    loli gcd = nums[0],lcm = nums[0];
    loli ans =0;
    for(int i =0;i<n;i++){
        if(y%nums[i]||nums[i]%x)ans++;
        else{
            gcd = GCD(nums[i],gcd);
            lcm = lcm * nums[i] / GCD(lcm,nums[i]);
        }
    }
    if(ans>=2)cout <<ans<<'\n';
    else if(ans){
        if(gcd == x || lcm == y ||GCD(y / gcd, lcm / x)==1){
            cout <<"1\n";
            return;
        }
        cout <<"2\n";
        return;
    }else{
        if(x == gcd && y == lcm){
            cout <<"0\n";
            return;
        }else if(gcd == x || lcm == y||GCD(x/gcd,lcm/y)==1){
            cout <<"1\n";
            return;
        }
        cout <<"2\n";
        return;
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