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
int n,t;
int str_int(string s){
    int res = 0;
    int now  = 1;
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]=='1')res+=now;
        now*=2;
    }
    return res;
}
string int_str(int i){
    string s;
    for(int j =0;j<n;j++){
        if(i&1)s+='1';
        else s+='0';
        i>>=1;
    }
    reverse(s.begin(),s.end());
    return s;
}
int after_med(int now,string sym,string side){
    string res = int_str(now);
    // cout << res<<" ";
    for(int i =0;i<n;i++){
        if(sym[i]=='1')res[i]='0';
        if(side[i]=='1')res[i] = '1';
    }
    // cout << res<<endl;
    return str_int(res);
}
void move(vvpii & edge,int day,string sym, string side){
    for(int i =(1<<n)-1;i>=0;i--){
        
        edge[i].pb({day,after_med(i,sym,side)});
    }
}
int dijs(vvpii &edge,int start, int end){
    priority_queue< pii, vector<pii>, greater<pii>> pq; // pair<d,u>;
    vector<loli> dis( (1 << n) + 10, -1);
    pq.push({0,start});
    while(pq.size()){
        auto [w,from] = pq.top();
        pq.pop();
        if(dis[from]!=-1)continue;
        dis[from] = w;
        for(auto [a,b]: edge[from]){
            pq.push({w+a,b});
        }
    }
    return dis[end];
}
void _solve(){
    string start;
    cin >> n>>t>>start;
    vvpii edge(1<<n+1);
    for(int i =0;i<t;i++){
        int tim;
        string sym;
        string side;
        cin >> tim>>sym>>side;
        move(edge,tim,sym,side);
    }
    cout << dijs(edge,str_int(start),0)<<endl;
}
signed main(){
    //ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
//    auto now = pos("00011");
    cin >>_;
    while(_--){
        _solve();   
    }

}