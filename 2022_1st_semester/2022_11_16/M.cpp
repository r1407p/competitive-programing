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

    int n;
    cin >> n;
    vi state(n);
    queue<int> can;
    int mx= -1;
    for(int i =0;i<n;i++){
        cin >> state[i];
        if(!state[i]){
            can.push(i);
        }else{
            mx = i;
        }
    }
    if(mx == -1){
        cout <<"YES\n";
        return;
    }
    vvi ans;
    while(mx>=0){
        if(can.empty()){
            cout << "NO\n";
            return;
        }
        ans.pb({mx,can.front()});
        can.pop();
        state[mx]--;
        if(!state[mx]){
            can.push(mx);
            mx--;
        }
    }
    for(int i =0;i<n;i++){
        if(state[i]){
            cout <<"NO\n";
            return;
        }
    }
    cout <<"YES\n";
    for(auto &p:ans){
        cout <<p[0]+1<<" "<<p[1]+1<<endl;
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