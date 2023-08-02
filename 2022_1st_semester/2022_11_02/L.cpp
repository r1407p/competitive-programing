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
const int  mod = 1e9 +7;
//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
int inv(int a){
    int ans =1;
    int base = 10;
    while(a){
        if(a%2){
            ans*=base;
            ans%=mod;
        }
        base*=base;
        base%=mod;
        a/=2;
    }
    return ans;
}
void _solve(){
    str s;
    cin >>s;
    int q;cin >>q;
    int rev =inv(mod-2);
    int ans =0;
    for(int i =0;i<s.size();i++){
        ans*=10;
        ans+=s[i]-'0';
        ans%=mod;
    }
    for(int i =0;i<q;i++){
        char temp ;
        cin >> temp;
        if(temp=='+'){
            char t;
            cin >> t;
            s+=t;
            ans = ans*10;
            ans+=t-'0';
            ans%=mod;
            cout<<ans<<endl;
        }else{
            int last = s[s.size()-1]-'0';
            s.pop_back();       
            ans -=last;
            if(ans<0)ans+=mod;
            ans*=rev;
            ans%=mod;
            cout <<ans<<endl;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}