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
#define maxn 100005
//int a[maxn];
bool used(maxn);
vpii have(maxn);
vpii need(maxn);
void _solve(){
    int n;
    cin >>n;
    for(int i =0;i<n;i++){
        int a, b;
        cin >> a>>b;
        have[i].first = a;
        have[i].second =  i;
        need[i].first = b;
        need[i].second = i;
    }
    sort(rALL(have));
    sort(ALL(need));
    long long int now =0;
    int ans =0;
    int i =0,j =0;
    used[have]
    while(i<n&&j<n){
        if(have[i]<need[j]){
            break;
        }



    }
    cout << ans<<'\n';

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