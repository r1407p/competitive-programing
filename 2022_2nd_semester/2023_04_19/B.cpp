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
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    vvi nei(a+5,vi());
    vi num(a+5);
    vi remain(a+5);
    for(int i =0;i<b;i++){
        int t1,t2;
        cin >>t1>>t2;
        nei[t1].pb(t2);
        nei[t2].pb(t1);
    } 
    for(int i = 1;i<=a;i++){
        num[i] = nei[i].size();
        remain[i] = num[i];
    }
    queue<int> qu;
    qu.push(d);
    vb leave(a+5,false);
    leave[d] = true;

    while(qu.size()){
        int now = qu.front();
        qu.pop();
        for(int i =0;i<nei[now].size();i++){
            int temp = nei[now][i];
            if(leave[temp]==true)continue;
            remain[temp]--;
            if(remain[temp]*2<=num[temp]){
                qu.push(temp);
                leave[temp]  = true;
            }
        }
    }
    if(leave[c])cout << "leave"<<endl;
    else cout << "stay"<<endl;


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