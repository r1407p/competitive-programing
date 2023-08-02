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
    int n ;
    cin >> n;
    vi temp(n,0);
    for(int i =0;i<n;i++){
        cout << "? 0 "<<i<<endl;
        cin >> temp[i];
        //cout << temp[i];
    }
    bool flag = false;
    if(temp[0]==n&&temp[1]==n){
        flag = true;//an = 0; 
    }
    int an;
    int bn;
    if(flag){
        an =0;
        for(int i =0;i<n;i++){
        cout << "? 1 "<<i<<endl;
        cin >> temp[i];
        }
        for(int i =0;i<n;i++){
            if(temp[i]==n){
                bn = i;
            }
        }
    }else{
        for(int i =0;i<n;i++){
            if(temp[i]==n){
                bn = i;
            }
        }
        //cout <<bn<<" dsfasd\n";
        int j =0;
        if(bn==0)j=1;
        //cout <<j<<endl;
        for(int i=0;i<n;i++){
            cout << "? "<<i<<" "<<j<<endl;
            cin >> temp[i];
        }
        for(int i =0;i<n;i++){
            if(temp[i]==n){
                an = i;
            }
        }
    }
    cout <<"! "<<((bn-an)+n)%n;
    /*
    2 1
    1 2
    */
}
signed main(){
    //ios_base::sync_with_stdio(false);
   //cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}