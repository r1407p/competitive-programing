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
    vi nums(n);
    for(auto &t:nums){
        cin >> t;
    }
    int now = nums[0];
    vb win(n);
    int res =0 ;
    int idx = 0;
    int mn = nums[0];
    for(int i =1;i<n;i++){
        if(nums[i]>nums[i-1]){
            res++;
            mn = min(mn,nums[i]);
            now = nums[i];
            idx = i;
            break;
        }
    }
    if(idx==0){
        cout << 0<<endl;
        return;
    }else{
        for(int i = idx+1;i<n;i++){
            if(nums[i]<mn){
                // cout << nums[i]<<endl;
                mn = nums[i];
                continue;
            }
            if(nums[i]<now){
                res++;
                now = nums[i];
            }
        }
    }
    cout <<res <<endl;

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