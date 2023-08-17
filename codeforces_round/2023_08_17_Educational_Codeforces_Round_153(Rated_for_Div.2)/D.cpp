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
    string s;
    cin >>s;
    int n = s.size();
    vector<int> one(n);
    vector<int> zero(n);
    if(s[0]=='1'){
        one[0] = 1;
    }
    for(int i =1;i<n;i++){
        if(s[i]=='1'){
            one[i]=one[i-1]+1;
        }else{
            one[i]= one[i-1];
        }
    }
    // one[i] = prev 1 
    //i - one[i] = prev 0;
    if(s[n-1]=='0'){
        zero[n-1] = 1;
    }
    for(int i = n-2;i>=0;i--){
        if(s[i]=='0'){
            zero[i]=  zero[i+1]+1;
        }else{
            zero[i]= zero[i+1];
        }
    }
    //zero[i] = last 0;
    //n-i = last1;
    int cnt_10 = 0;
    int cnt_01 = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='0'){
            cnt_10+=one[i];
        }else{
            cnt_01+=(i-one[i]+1);
        }
    }
    cout <<cnt_10<<" "<<cnt_01<<endl;


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