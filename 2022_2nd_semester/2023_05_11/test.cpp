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
void _solve(){
    int a,b;
    cin >> a>> b;
    vi nums(a*b);
    for(int i = 1;i<b;i++){
        if(i%2){
            nums[i] = 1;
        }else{
            nums[i] = 0;
        }
    }
    nums[b] = 1;
    for(int i = b+1;i<=a*b;i++){
        if(nums[i-1]==1&&nums[i-b]==1){
            nums[i] = 0;
        }else{
            nums[i] = 1;
        }
    }
    for(int i = 1;i<=a*b;i++){
        cout << nums[i]<<" " ;
        if(i%b==0){
            cout << endl;
        }
    }
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