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
#define maxn 100005
//int a[maxn];
//ifstream fin("test.in");
//ofstream fout("test.out");
vector<int> trees;
vector<bool> used(maxn);
vector<int> dep;
vvpii edge(maxn);
void dfs(int i,int last,int &time){
    cout << i<<endl;
    used[i] = true;
    
    //unordered_map<int,bool> db;

    for(auto j:edge[i]){
        cout << i << j.first<<endl;
        if(!used[j.first]){
            dfs(j.first,i,time);
        }
        // if(used[j.first])continue;
        // if(db[j.first])continue;
        // db[j.first] = true;

        // if(j.first==last && j.second==2){
        //     continue;
        // }else{
        //     //    cout << j.first<<"dsfs\n";
        //     dfs(j.first,i,time);
        // }
           //cout << i <<" "<< j.first<<" "<<used[j.first] <<endl;
    }
    dep[i] = time++;
}
void _solve(){
    int n,m;
    cin >> n>>m;
    for(int i =0;i<m;i++){
        int a,b,c;
        cin >> a >>b>>c;
        if(c==1){
            edge[a].pb({b,c});
        }else{
            edge[a].pb({b,c});
            edge[b].pb({a,c});
        }
    }
    int time = 0;
    for(int i =1;i<=n;i++){
        cout << "-----" <<i<<endl;
        if(!used[i]){
            trees.pb(i);
            dfs(i,0,time);
        }
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<edge[i].size();j++){
            if(dep[i]<=dep[edge[i][j].first]){
                cout << "Infinety"<<endl;
                return;
            }
        }
    }


}
signed main(){
    //ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}