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
void _solve(){
    int n;
    cin >> n;
    vi nums(n+1);
    map<int,int> mp;
    for(int i = 1;i<=n;i++){
        cin >> nums[i];
        mp[nums[i]]++;
    }
    int k;
    cin >> k;
    vvi res;
    for(int i =0;i<k;i++){
        int x,y;cin >> x>>y;
        int a,b;
        /*
        a+b = x;
        a*b = y;
        b = (x-a)

        */
        /*a^2 - ax + y = 0
        a =  (x ± √(x^2 - 4y)) / 2
        */
       int root = x*x-4*y;
       int temp = sqrt(root);
       if (temp*temp!=root){
            cout << 0 <<" ";
            continue;
       }
       int a1 = (x+temp)/2;
       int a2 = (x-temp)/2;
       int b1 = x-a1;
       int b2 = x-a2;
       if(temp ==0){
            int t = a1;
            cout << mp[t]*(mp[t]-1)/2<<" ";
       }
       else if(a1*b1==y){
            cout<<mp[a1]*mp[b1]<<" ";
       }else if(a2*b2 ==y){
            cout<< mp[a2]*mp[b2]<<" ";
       }


    }cout <<endl;

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