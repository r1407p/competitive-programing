//15:52
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
    int n;
    cin >> n;
    for(int i =n-1;i>=2;i--){
        if(i%2==0){// ab ab ab
            if(n%(i/2)==0){
                int target = n/(i/2);
                cout << target-target/2<<" "<<target/2<<endl;
            }
        }else{
            //a b a b a
            // ka + hb;
            int k  =i- i/2;
            int h = i/2;
            // cout << k <<h<<endl;
            vpii temp = {};
            // a == b
            int target = n;
            if(target%i==0){
                temp.pb({n/i,n/i});
            }
            target = n-k;
            if((target%i==0)){
                temp.pb({target/i+1,target/i});
            }
            for(auto t:temp){
                cout << t.first<<' '<<t.second<<endl;
            }
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