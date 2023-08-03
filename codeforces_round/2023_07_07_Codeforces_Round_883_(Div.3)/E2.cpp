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
loli target;
bool check(loli ex){
    //cout <<ex<<"============"<<endl;
    loli l = 2;
    loli r =1e9;
    while(l<=r){
        loli mid = (l+r)/2;
        //cout <<l<<" "<< mid<<" "<<r<<endl;;
        auto tar = (__int128)target*(mid-1)+1;
        __int128 pow = 1;
        for(int i = 1;i<=ex;i++){
            pow*=mid;
            if(pow>tar)break;
        }
        if(pow ==tar )return true;
        if(pow>tar)r = mid-1;
        else l = mid+1;
    }
    return false;
}

void _solve(){
    cin >> target;
    for(int i = 3;i<64;i++){
        if(check(i)){
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";
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