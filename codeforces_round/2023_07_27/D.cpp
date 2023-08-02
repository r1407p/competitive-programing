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
int n;

void _solve(){
    cin >> n;
    vi nums(n);
    vb draw(n,false);
    int res = 0;
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    for(int i =0;i<n;i++){
        if(nums[i]==0)continue;
        // cout << i <<" ";
        int j = i;
        bool is2 = false;
        while(j<n&&nums[j]!=0){
            if(nums[j]==2){
                is2 = true;
            }
            j++;
        }
        // cout << is2<<endl;
        if(is2){
            if(i-1>=0)draw[i-1] = true;
            if(j<n)draw[j] = true;
        }else{
            if(i>=1&& !draw[i-1]&&i-1>=0){
                draw[i-1] = true;
            }else if(j<n){
                draw[j] = true;
            }
        }
        i = j-1;
        res++;
    }
    // cout << res<<endl;
     for(int i = 0;i < n;i++){
        if(nums[i]==0 &&!draw[i]){
            res++;
        }
    }
    cout <<res<<endl;
 
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