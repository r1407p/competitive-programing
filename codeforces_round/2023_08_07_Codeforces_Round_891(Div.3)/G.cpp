#include<bits/stdc++.h>
 
 
using namespace std;


#define int long long 
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
#define mod 998244353
//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
class DSU{
public:

    vector<int> boss;
    vector<int> size;
    DSU(int n){
        boss.resize(n+1,0);
        size.resize(n+1,1);
        for(int i =0;i<=n;i++)boss[i] = i;
    }
    int get(int i){
        if(i == boss[i])return i;
        return boss[i] = get(boss[i]);
    }
    int get_size(int i){
        return size[get(i)];
    }
    void merge(int i,int j){
        int a = get(i);
        int b = get(j);

        if(a!=b){
            boss[a] = b;
            boss[i] = b;
            boss[j] = b;
            size[b] +=size[a];
        }
    }
};

int mpow(int a,int b){
    if(a==0)return 0;
    int res = 1;
    int basic = a;
    while(b){
        if(b%2){
            res*=basic;
            res%=mod;
        }
        basic*=basic;
        basic%=mod;
        b/=2;
    }
    // cout <<a<<" "<<b<<" "<<res <<" ";
    return res;
}
void _solve(){
    int n,s;
    cin >> n>>s;
    vvi edges(n-1);
    for(int i =0;i<n-1;i++){
        int a,b,c;
        cin >> a >>b>> c;
        edges[i] = {c,a,b};
    }
    sort(ALL(edges));
    DSU dsu(n);
    int ans = 1;
    for(int i =0;i<n-1;i++){
        int a = edges[i][1];
        int b = edges[i][2];
        int c = edges[i][0];
        int sz_a = dsu.get_size(a);
        int sz_b = dsu.get_size(b);
        dsu.merge(a,b);
        int con = sz_a*sz_b-1;
        int num = s-c+1;
        ans *= mpow(num,con);
        // cout << a<<b<<c;
        ans %= mod;
    }
    cout <<ans <<endl;
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
/**
1 2 
1 3 
3 4
3 5

1 4  
1 5 
2 3
2 4
2 5
4 5


*/