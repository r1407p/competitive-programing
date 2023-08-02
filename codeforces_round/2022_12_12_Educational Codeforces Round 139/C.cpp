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
    int t ;
    cin >> t;
    vs s(2);
    cin >> s[0]>>s[1];
    bool up = true;
    if(s[0][0]=='B'){
        if(s[1][0]=='W'){
            up = true;
            for(int i =1;i<t;i++){
                if(up){
                    if(s[0][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[1][i]=='B')
                        up = false;
                }else{
                    if(s[1][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[0][i]=='B')
                        up = true;
                }
            }
            cout << "YES\n";
            return ;
        }    
        else{
            up  = true;
            bool can = true;
            for(int i =1;i<t;i++){
                if(up){
                    if(s[0][i]!='B'){
                        can = false;
                        break;
                    }
                    if(s[1][i]=='B')
                        up = false;
                }else{
                    if(s[1][i]!='B'){
                        can = false;
                        break;
                    }
                    if(s[0][i]=='B')
                        up = true;
                }
            }
            if(can){
                cout <<"YES\n";
                return;
            }
            up  = false;
            for(int i =1;i<t;i++){
                if(up){
                    if(s[0][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[1][i]=='B')
                        up = false;
                }else{
                    if(s[1][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[0][i]=='B')
                        up = true;
                }
            }
            cout << "YES\n";
            return;
        }
    }else{
        if(s[1][0]=='B'){
            up = false;
            for(int i =1;i<t;i++){
                if(up){
                    if(s[0][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[1][i]=='B')
                        up = false;
                }else{
                    if(s[1][i]!='B'){
                        cout <<"NO\n";
                        return;
                    }
                    if(s[0][i]=='B')
                        up = true;
                }
            }
        }else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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