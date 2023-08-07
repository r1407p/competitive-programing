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
    int total = n*(n-1)/2;
    vi nums(total);
    for(int i = 0 ;i<total;i++){
        cin >> nums[i];
    }
    sort(ALL(nums));
    vi res;
    int now = 0;
    for(int i = n-1;i>=1;i--){
        // cout << i <<" "<<now <<" "<< nums[now]<<endl;;
        res.pb(nums[now]);
        now+=i;
    }
    for(int i =0;i<n-1;i++){
        cout << res[i]<<" ";
    }
    cout << res[n-2]<<endl;

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
/* 
2 2 3 5 
2 2 2 2 2 3 
2 2 3 4 
*/