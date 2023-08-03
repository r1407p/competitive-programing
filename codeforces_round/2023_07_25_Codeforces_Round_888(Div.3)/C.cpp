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
    int n ,k;
    cin >> n>>k;
    vi nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    if(k==1){
        cout <<"Yes\n";
        return;
    }
    int res =0;
    if(nums[0]==nums[n-1]){
        for(int i =0;i<n;i++){
            if(nums[i]==nums[0])res++;
        }
    }
    if(res>=k){
        cout << "Yes\n";
        return;
    }
    int temp = k;
    int left = 0;
    int right = n-1;
    while(left<n){
        if(nums[left]==nums[0]){
            temp--;
            if(temp==0)break;
        }
        left++;
    }
    temp = k;
    while(right>=0){
        if(nums[right]==nums[n-1]){
            temp--;
            if(temp==0)break;
        }
        right--;
    }
    if(left<right){
        cout << "Yes\n";
        return ;
    }
    cout <<"No\n";
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