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

vector<pair<double,string>> mid;
vector<pair<double,string>> last;
map<string,pair<double,double>> mp;
void _solve(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        string a;
        double b,c;
        cin >> a>>b>>c;
        mid.push_back({b,a});
        last.push_back({c,a});
    }
    sort(mid.begin(),mid.end());
    sort(last.begin(),last.end());
    if(mid[0].second==last[0].second||mid[0].second==last[1].second||mid[0].second==last[2].second){

    }else{
        cout <<mid[0].first+last[0].first+last[1].first+last[2].first<<'\n';

        
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