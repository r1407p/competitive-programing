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
vi nums;
int n,k;
vvi dp(1005,vi(1005));
vi sum(1005);
int __solve(int i,int j){
    int now =0;
    if(i==0)now = sum[j];
    else now = sum[j]-sum[i-1];
    int length = j-i+1;
    if(dp[i][j]>j+1+nums[j+1])return 0;
    int need = (dp[i][j]-i+dp[i][j]-j)*length/2;
    need -=now;
    // cout << i <<" "<<j <<" "<<now << " "<<need+now<<endl;;
    if(need<=k){
        int res = dp[i][j]-i;
        int rest = (k-need)/length;
        // cout << res <<" "<<  rest << " "<< nums[j+1]+1-nums[j]<<endl;

        return res +min(rest,max(nums[j+1]+1-dp[i][j]+j,0LL));
    }
    return 0;

}

void _solve(){
    cin >> n>>k;
    nums.resize(n);
    int mx = INT_MIN;
    int ind = -1;
    for(int i =0;i<n;i++){
        cin >> nums[i];;
        if(nums[i]>mx){
            mx = nums[i];
            ind = i;
        }else if(nums[i]==mx){
            if(i!=0&&nums[i-1]> nums[ind-1]){
                mx = nums[i];
                ind = i;
            }
        }
    }
    for(int i =0;i<n;i++){
        int mx = i+nums[i];
        for(int j =0;j<n;j++){
            mx = max(mx,j+nums[j]);
            dp[i][j] = mx;
        }
    }
    sum[0] = nums[0];
    for(int i =1;i<n;i++){
        sum[i] = sum[i-1]+nums[i];
    }
    nums.pb(nums[n-1]-1);
    int res = mx;
    // cout << mx <<" "<<ind <<endl;
    for(int i =0;i<n-1;i++){
        for(int j =i;j<n-1;j++){
            res = max(__solve(i,j),res);
        }
    }
    cout << res<<endl;
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