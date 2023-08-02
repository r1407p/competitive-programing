#include<bits/stdc++.h>
 
 
using namespace std;


//#define int long long 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define ALL(X) X.begin(), X.end()

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
#define pi acos(-1);
void _solve(){
    double m,n;
    cin >> m>>n;
    double r;
    cin >>r;
    double a,b,c,d;
    cin >>a>>b>>c>>d;
    double tempa = abs(b-d)*r/n;
    b=  min(b,d);
    d = b;
   // cout << tempa<<'\n';
    double angle = (abs(a-c)/m)*(acos(-1));
    double mn = angle*r*b/n;
    for(int i =0;i<b;i++){
        double temp = (b-i)*2*r/n;
        temp+=i/n*r*angle;
        mn = min(mn,temp);
    }
    cout << fixed<<setprecision(18);
    cout <<mn+tempa;
    // double tempb = (abs(a-c)/m)*(acos(-1))*r*min(b,d)/n;
    // cout << tempb<<'\n';
    // cout << fixed<<setprecision(18);
    // cout << tempa+tempb;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}