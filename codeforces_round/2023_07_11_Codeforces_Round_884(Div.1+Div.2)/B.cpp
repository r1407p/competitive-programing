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
bool dp[maxn];
vector<int> prime;
void process(){
    dp[0] = true;
    dp[1] = true;
    for(int i =2;i<maxn;i++){
        if(dp[i]==true){
            continue;
        }
        prime.pb(i);
        for(int j =i;j<maxn;j+=i){
            dp[j] = true;
        }
    }
}
void _solve(){
    int n;
    cin >> n;
    if(n==1){cout <<1<<endl;return;}
    if(n==2){cout <<"2 1"<<endl; return;}
    int t = (n+1)/2;
    cout <<"2 ";
    for(int i =2;i<t;i++){
        cout << i+2<<" ";
    }
    cout <<1;
    for(int i = t+1;i<n;i++){
        cout <<" "<< i+1;
    }
    cout <<" 3"<<endl;
    

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    process();
    while(_--){
        _solve();   
    }

}