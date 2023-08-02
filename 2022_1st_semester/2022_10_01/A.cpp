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
    int n,k;
    cin >> n>> k;
    vector<pair<string,string>> ori(n);
    queue<int> qu;
    for(int i =0;i<n;i++){
        cin >> ori[i].first >> ori[i].second;
        qu.push(i);
    }
    int max = n;
    for(int i =0;i<k;i++){
        if(qu.empty())break;
        auto now = ori[qu.front()];
        qu.pop();
        if(now.first=="cp"){
            if(max<k){
                int p= stoi(now.second);
                for(int j =0;j<p;j++){
                    qu.push(j);
                }
                max+=p;
            }
        }else{
            cout <<now.second;
        }
    }
    cout << endl;
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