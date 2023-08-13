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
vi des;
vi cnt;
vvi nums;
void dfs(int from ,int past){
    des[from] = 1;
    for(auto to:nums[from]){
        if(to!=past){
            dfs(to,from);
            des[from]+=des[to];
        }
    }
    cnt[des[from]]++;
}
void _solve(){
    int n;
    cin >> n;
    nums.resize(n+1);
    for(int i =1;i<n;i++){
        int a,b;
        cin >> a>>b;
        nums[a].pb(b);
        nums[b].pb(a);
    }
    
    des.resize(n+1);
    cnt.resize(n+1);
    dfs(1,0);
    for(int i =n-1;i>0;i--){
        if(n%i!=0){
            continue;
        }
        int temp = 0;
        for(int j = i;j<=n;j+=i){
            temp+=cnt[j];
        }
        if(temp == n/i){
            cout<< n/i-1<<" ";
        }
    }cout << endl;
    // for(int i = 1;i<=n;i++){
    //     cout <<des[i]<<" ";
    // }cout << endl;

    // for(int i = 1;i<=n;i++){
    //     cout <<cnt[i]<<" ";
    // }cout << endl;
    
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