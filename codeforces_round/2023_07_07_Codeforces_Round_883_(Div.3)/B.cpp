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
    vector<string> mp(3);
    cin >> mp[0];
    cin >> mp[1];
    cin >> mp[2];
    
    if(mp[0][0]==mp[0][1]){
        if(mp[0][0]==mp[0][2]){
            if(mp[0][0]!='.'){
                cout << mp[0][0]<<endl;
                return;
            }
        }
    }
    if(mp[1][0]==mp[1][1]){
        if(mp[1][0]==mp[1][2]){
            if(mp[1][0]!='.'){
                cout << mp[1][0]<<endl;
                return;
            }
        }
    }
    if(mp[2][0]==mp[2][1]){
        if(mp[2][0]==mp[2][2]){
            if(mp[2][0]!='.'){
                cout << mp[2][0]<<endl;
                return;
            }
        }
    }
    
    if(mp[1][0]==mp[0][0]){
        if(mp[0][0]==mp[2][0]){
            if(mp[0][0]!='.'){
            cout << mp[0][0]<<endl;
            return;
            }
        }
    }
    if(mp[1][1]==mp[0][1]){
        if(mp[0][1]==mp[2][1]){
            if(mp[0][1]!='.'){
            cout << mp[0][1]<<endl;
            return;
            }
        }
    }
    if(mp[1][2]==mp[0][2]){
        if(mp[0][2]==mp[2][2]){
            if(mp[0][2]!='.'){
            cout << mp[0][2]<<endl;
            return;
            }
        }
    }
    if(mp[0][0]==mp[1][1]){
        if(mp[2][2]==mp[1][1]){
            if(mp[1][1]!='.'){
                cout << mp[0][0]<<endl;
                return;
            }
        }
    }
    if(mp[0][2]==mp[1][1]){
        if(mp[1][1]==mp[2][0]){
            if(mp[1][1]!='.'){
                cout << mp[1][1]<<endl;
                return;
            }
        }
    }
    cout<< "DRAW"<<endl;
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