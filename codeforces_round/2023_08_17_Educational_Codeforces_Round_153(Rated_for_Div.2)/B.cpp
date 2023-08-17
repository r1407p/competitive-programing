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
int a,b,c,d;
void _solve(){
    
    cin >> a>>b>>c>>d;
    // cout <<a<<b<<c<<d;
    int temp = a/b;
    // cout << temp;
    if(temp <= d){

        a%=b;
        d-=temp;
        temp-=temp;
        cout << max(a-c,0)<<endl;;
    }else{
        a-= d*b;
        temp-=d;
        d-=d;
        // cout <<'-';
        if(a<=c){
            cout << 0 <<endl;
        }else{
            int need = a-c;
            // cout << need<<endl;
            int k = need%b;
            int t = need/b;
            // cout <<k <<" "<<t<<endl;
            int temp1 = k+t;
            if(k==0){
                cout << t<<endl;
            }
            else if(k+c>=b){
                cout << t+1<<endl;
            }else{
                cout << temp1<<endl;;
            }
        }
    }

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