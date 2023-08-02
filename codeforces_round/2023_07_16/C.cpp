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

int gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}
void _solve(){
    int n ;
    cin >>n;
    vi old_(n);
    vi new_(n);
    for(auto &t:old_)cin >> t;
    for(auto &t:new_)cin >> t;
    bool t1 = false,t2 = false,t3 = false;
    for(int i =0;i<n;i++){
        if(old_[i]==0&&new_[i]==0)continue;
        int x = gcd(old_[i],new_[i]);
        if(x){
            old_[i]/=x;
            new_[i]/=x;
        }
        if(old_[i]%2!=0&&new_[i]%2!=0)t1=true;
		else if(old_[i]%2==0&&new_[i]%2!=0)t2=true;
		else t3=true;
    }
    int cnt=0;
	if(t1)cnt++;
	if(t2)cnt++;
	if(t3)cnt++;
	if(cnt==0||cnt==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    return;
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