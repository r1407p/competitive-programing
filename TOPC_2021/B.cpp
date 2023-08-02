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
#define maxn 1000005
vvi nums(maxn,vi(1,1));
vi in;
void _solve(){
    int n ;
    cin >> n;
    int mx =0;
    for(int i =0;i<n;i++){
        int temp;
        cin >> temp;
        mx = max(mx,temp);
        in.pb(temp);
    }
    for(int i =2;i<mx;i++){
        for(int j =i+i;j<=mx;j+=i){
            nums[j].pb(i);
        }
    }
    for(int i =0;i<n;i++){
        int sum =0;
        for(auto s:nums[in[i]]){
            sum+=s;
        }//cout << sum <<endl;
        if(sum>in[i])cout << "abundant\n";
        else if(sum<in[i])cout << "deficient\n";
        else cout << "perfect\n";
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