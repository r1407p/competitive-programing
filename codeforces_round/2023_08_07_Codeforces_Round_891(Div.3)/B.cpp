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
    string n;
    cin >> n;
    vi nums(n.size()+1,0);
    for(int i =1;i<=n.size();i++){
        nums[i]= n[i-1]-'0';
    }
    int mn = n.size()+1;
    for(int i =n.size();i>=0;i--){
        if(nums[i]>=5){
            nums[i-1]++;
            mn = i;
        }
    }
    for(int i = mn;i<=n.size();i++)nums[i] = 0;
    int now =0;
    for(int i = n.size();i>=0;i--){
        nums[i]+=now;
        now = nums[i]/10;
        nums[i]%=10;
    }
    for(int i =0;i<=n.size();i++){
        if(i==0){
            if(nums[i]==0)continue;
        }
        cout << nums[i];
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