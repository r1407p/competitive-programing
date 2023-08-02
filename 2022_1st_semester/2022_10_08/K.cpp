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
void _solve(){
    int n;cin >> n;
    int pivot = 0;
    int mn = INT_MAX;
    for(int i =0;i<n;i++){
        int price;
        cin >> price;
        string str;
        cin >> str;
        int coutt[10]={0};
        for(auto c:str){
           // cout <<c-'0';
            coutt[c-'0']++;
        }
        //cout <<endl;
        
        if(coutt[0]>=1&&coutt[1]>=1&&coutt[2]>=2){
            if(price<mn){
                mn = price;
                pivot = i+1;
            }
        }
        
    }
    
    cout << pivot<<'\n';

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