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
int a[maxn] = {0};
void _solve(){
    int n;cin >> n;
    vvi nums(n+5);
    for(int i =0;i<n;i++){
        int temp;
        cin >> temp;
        for(int j =0;j<temp;j++){
            int t;
            cin >> t;
            nums[i].eb(t);
        }
    }
    int ans =0;
    for(int i = n-1;i>=0;i--){
        int mx =0;
        for(int j =0;j<nums[i].size();j++){
           // cout << nums[i][j]<<endl;
            a[nums[i][j]]++;
            mx = max(mx,a[nums[i][j]]);
        }
        for(int j =0;j<nums[i].size();j++){
            a[nums[i][j]] = mx;
            //cout << nums[i][j]<<":"<<a[nums[i][j]]<<endl;
        }
        ans = max(ans,mx);
    }
    cout <<ans<<endl;
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