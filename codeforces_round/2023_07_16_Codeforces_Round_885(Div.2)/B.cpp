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
    int k,n ;
    cin >>n>>k;
    vector<vector<int>> mx(k+1);
    vector<int> nums(n+1);
    for(int i =1;i<=n;i++){
        cin >>nums[i];
        mx[nums[i]].pb(i);
    }
    
    int res =INT_MAX;
    for(int i =1;i<=k;i++){
        if(mx[i].size()==0)continue;
        vector<int> temp = {mx[i][0]};
        for(int j =1;j<mx[i].size();j++){
            temp.pb(mx[i][j]-mx[i][j-1]);
        }
        temp.pb(n+1-mx[i][mx[i].size()-1]);
        sort(rALL(temp));
        // cout << temp[0]<<" "<<temp[1]<<endl;
        int tmp = max((temp[0]+1)/2,temp[1]);
        res = min(tmp,res);
    }
    cout << res-1<<endl;
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