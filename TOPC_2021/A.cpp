#include<bits/stdc++.h>
 
using namespace std;
//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()

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
vector<tuple<int,int,int,string>> ans;
void _solve(){
    int n ;
    cin >> n;
    for(int i =0;i<n;i++){
        int a,b,c;
        str strs;
        cin >>a>>b>>c;
        getline(cin,strs);
        ans.pb(make_tuple(a,b,c,strs));
    }
    sort(ALL(ans));
    reverse(ALL(ans));
    str sss =get<3>(ans[0]);
    sss.erase(sss.begin()) ;
    cout << sss<<'\n';
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