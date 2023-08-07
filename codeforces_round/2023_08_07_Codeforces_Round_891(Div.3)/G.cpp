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
int dfs(int start,vb &used,vvpii &edges,vector<map<int,pii>>& e){
    // bool flag = true;
    int res = 1;
    for(int i = 0;i<edges[start].size();i++){
        int to = edges[start][i].first;
        if(!used[to]){
            // flag = false;
            used[to] = true;
            e[start][to].second = dfs(to,used,edges,e);
            cout << start <<" "<<to <<" "<< e[start][to].second<<endl;
            res+=e[start][to].second;
        }
    }
    return res;

}
void _solve(){
    int n,s;
    cin >> n>>s;
    vvpii edge(n+1);
    // cout << n << s;
    vector<map<int,pii>> e(n+1);
    vvi nums(n-1);
    // edges = n*(n-1)/2 - (n-1);
    for(int i =0;i<n-1;i++){
        int a,b,c;
        cin >> a >>b>> c;
        nums[i] = {a,b,c};
        edge[a].pb({b,c});
        edge[b].pb({a,c});
        e[a][b] = {c,-1};
        e[b][a] = {c,-1};
    }
    int start;
    vb used(n+1);
    for(int i =1;i<n;i++){
        if(edge[i].size()==1){
            start = i;
            break;
        }
    }
    cout << start<<endl;
    used[start] = true;
    dfs(start,used,edge, e);
    for(int i =0;i<n;i++){
        int a = nums[i][0];
        int b = nums[i][1];
        int c = nums[i][2];
        cout << a<<" "<<b <<endl;
        cout << e[a][b].first<<" "<<e[a][b].second<<endl;;
        cout << e[b][a].first<<" "<<e[b][a].second<<endl;;
        cout <<"-----------"<<endl;
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