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
    int target = 0;
    cin >> target;
    vi nums;
    for(int i = 1;i<n;i++){
        int temp;
        cin >> temp;
        nums.pb(temp);
    }
    sort(rALL(nums));
    nums.pb(target);
    vi nn;
    if(pow(2,((int)log2(n)))!=n){
        int temp = pow(2,((int)log2(n)));
        cout <<temp <<"!!"<<endl;
        for(int i =0 ;i<2*(n-temp);i++){
            nn.pb(nums[i]);
        }
        for(int  i= 2*(n-temp);i<n-1;i++){
            nn.pb(0);
            nn.pb(nums[i]);
        }
    }else{
        for(int i =0;i<n-1;i++){
            nn.pb(nums[i]);
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