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
    int n;cin >>n;
    vi a(n+1);
    vi b(n+1);
    for(int i =1;i<=n;i++){
        cin>>a[i];
        a[i] = i;
    }
    for(int i =1;i<=n;i++)cin>>b[i];
    vvi ans;
    ans.pb({1,n,0});//0 increase,1 decrease;
    for(int i =1;i<=n;i++){
        // for(int i =0;i<=n;i++)cout <<a[i];
        // cout << endl;
        // //for(int i =0;i<=n;i++)cout <<b[i];
        // cout << endl;
        if(a[i]==b[i])continue;
        if(a[i]<b[i]){
            int pivot = find(ALL(a),b[i])-a.begin();
            sort(a.begin()+i,a.begin()+pivot+1,greater<int>());
            ans.pb({i,pivot,1});
        }else{
            int pivot = find(ALL(a),b[i])-a.begin();
            sort(a.begin()+i,a.begin()+pivot+1);
            ans.pb({i,pivot,0});
        }
    }
    cout <<ans.size()<<endl;
    for(int i =0;i<ans.size();i++){
        cout <<ans[i][0]<<" "<<ans[i][1]<<" "<< (ans[i][2]?'D':'I')<<endl;
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