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
int ans = INT_MAX;
int n;
void cal(vi nums,int a,int b){
    bool flag = true;
    for(int i =0;i<2*n;i++){
        if(nums[i]!=i+1)flag = false;
    }
    if(flag){
        if(a+b<ans)ans = a+b;
        return;
    }
    if(a<4){
        vi temp(2*n+5);
        for(int i =0;i<n;i++){
            temp[i] = nums[i+n];
            temp[i+n] = nums[i];
        }
        cal(temp,a+1,b);
    }
    if(b<4){
        vi temp(2*n+5);
        for(int i =0;i<n;i++){
            temp[2*i] =nums[2*i+1];
            temp[2*i+1] = nums[2*i];
        }
        cal(temp,a,b+1);
    }

}
void _solve(){
    cin >> n;
    vi nums(2*n+5);
    for(int i =0;i<2*n;i++){
        cin >> nums[i];
    }
    cal(nums,0,0);
    if(ans==INT_MAX)ans = -1;
    cout <<ans<<'\n';
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