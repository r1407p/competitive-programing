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
    vector<__int128> temp;
    for(int i =0;i<n;i++){
        int t;
        cin >> t;
        if(t<128){
            __int128 res = 0;
            __int128 now = 1;
            for(int i =0;i<temp.size();i++){
                res= res+now*(temp[i]-128);
                now= now*128;
            }
            res+=now*t;
            // cout <<res<<" ";
            loli ret;
            if(res%2==0){
                ret = res/2;
            }else{
                res+=1;
                res/=-2;
                ret = res;
            }
            cout << ret<< endl;
            temp.clear();
        }else{
            temp.pb(t);
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    // cin >>_;
    while(_--){
        _solve();   
    }
 
}