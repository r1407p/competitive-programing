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
int query(int l, int r) {
    if (l == r) return 0;
    cout << "? " << l << ' ' << r << endl;
    int res; 
    cin >> res;
    return res;
}

int cal(int l, int r) {  
    if (l == r) return l;

    int mid = (l + r)/2;
    int pos1 = cal(l, mid);
    int pos2 = cal(mid + 1, r);

    if(query(pos1,pos2-1) ==query(pos1,pos2)){
        return pos2;
    }else{
        return pos1;
    }
    return (query(pos1, pos2 - 1) == query(pos1, pos2) ? pos2 : pos1);
}
void _solve(){
    int n;
    cin >> n;
    int temp = cal(1, n);
    cout << "! "<<temp<<endl;;
}
signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }

}