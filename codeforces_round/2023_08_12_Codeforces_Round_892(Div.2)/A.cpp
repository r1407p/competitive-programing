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
    int flag  = false;
    
    int mx = INT_MIN;
    for(int i =1;i<n;i++){
        if(nums[i]!=nums[i-1])flag = true;
        mx = max(mx,nums[i]);
    }
    if(!flag){
        cout << -1<<endl;;
        return;
    }
    sort(ALL(nums));
    vi a = { nums[0] };  
    vi b  ={ nums[n-1]};
    for(int i =1;i<n-1;i++){
        bool temp = false;
        for(auto t:b){
            if(nums[i]%t==0)temp = true;
        }
        if(temp)b.pb(nums[i]);
        else a.pb(nums[i]);
    }
    for(auto i :a){
        for(auto j:b){
            if(i%j==0){
                cout <<-1<<endl;
                return ;
            }
        }
    }
    cout <<a.size()<<" "<<b.size()<<endl;
    for(auto i:a){
        cout << i <<" ";
    }cout << endl;
    for(auto i:b){
        cout << i <<" ";
    }cout << endl;

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