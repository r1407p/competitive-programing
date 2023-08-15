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
    int n,m,d;
    cin >> n>>m>>d;
    vi nums;
    for(int i =0;i<m;i++){
        int t;
        cin >> t;
        nums.pb(t);
    }
    if(nums[0]!=1){
        nums.insert(nums.begin(),1);
    }else{
        nums.insert(nums.begin(),1-d);
    }
    nums.pb(n+1);
    vvi res;
    for(int i = 1;i<=m;i++){
        int front = nums[i-1];
        int mid = nums[i];
        int back = nums[i+1];
        int ori = 0;
        int del = 0;
        ori +=1;
        ori+=(mid-front-1)/d;
        ori+=1;
        ori+=(back-mid-1)/d;
        del += 1;
        del+=(back-front-1)/d;
        // cout << ori<<" "<<del <<endl;
        res.pb({del-ori,i});
    }
    sort(ALL(res));
    int del = res[0][0];
    int temp = 0;
    for(int i = 0;i<m;i++){
        if(res[i][0]==del)temp++;
    }
    // cout <<temp<<endl;
    vi ne;
    for(int i = 0;i<=m+1;i++){
        if(i!=res[0][1])
            ne.pb(nums[i]);
    }
    int total = 0;
    for(int i = 1;i<=m;i++){
        int front = ne[i-1];
        int mid = ne[i];
        total +=1;
        total +=(mid-front-1)/d;
        // cout << ne[i]<<" ";
    }//cout <<endl;
    if(ne[0]!=1)total-=1;
    cout <<total<<" "<<temp<<endl;





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