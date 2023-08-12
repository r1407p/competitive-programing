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
    int n;
    cin >> n;
    vvi nums(n);
    for(int i =0;i<n;i++){
        int t;cin >>t;
        for(int j =0;j<t;j++){
            int temp;
            cin >>temp;
            nums[i].pb(temp);
        }
        sort(ALL(nums[i]));
    }
    int mn1 = INT_MAX;
    int mn2 = INT_MAX;
    int sum2 = 0;
    for(int i =0 ;i<n;i++){
        mn1 = min(mn1,nums[i][0]);
        mn2 = min(mn2,nums[i][1]);
        sum2 += nums[i][1];
    }
    cout << sum2-mn2+mn1<<endl;;


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