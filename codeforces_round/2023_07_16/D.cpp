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
int test(int a,int b){
    int k = 20*b-4*a;
    int top = k/160;
    if(top<0){
        return a*b;
    }
    return max((a+top*20)*(b-top*4),(a+top*20+20)*(b-top*4-4));
}
void _solve(){
    int a,b;
    cin >> a>>b;
    long long res = a*b;
    if(a%10==0){
        cout << res<<'\n';
        return;
    }
    if(a%10==5){
        cout <<max(res,(a+5)*(b-1))<<'\n';
        return ;
    }
    if(a%2==1){
        a+=a%10;
        b-=1;
        res = max(res,a*b);
    }
    for(int i = 0;i<4;i++){
        if(b<=0)break;
        res = max(res,test(a,b));
        a+=a%10;
        b-=1;
    }
    cout <<res<<endl;;
}
signed main(){
    // ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }

}