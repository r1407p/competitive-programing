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
ifstream fin("hanya.in");
//ofstream fout("test.out");
void _solve(){
    int t ;
    fin >> t;
    vi nums;
    while(t--){
        int temp;
        fin >>temp;
        nums.pb(temp);
    }
    int mn = nums[0];
    int mx = nums[0];
    for(int i =1;i<t;i++){
        mn = min(mn,nums[i]);
        mx = max(mn,nums[i]);
    }
    if(mn<0&&mx>0){
        cout << 2<<endl;
    }else{
        cout << 1<<endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    fin >>_;
    cout <<_;
    while(_--){
        _solve();   
    }

}