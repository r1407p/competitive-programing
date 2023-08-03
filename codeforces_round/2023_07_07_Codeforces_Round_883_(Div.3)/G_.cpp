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
void pus(vector<int> &res,vector<int>& temp,int now,int at){
    if(at== temp.size()){
        if(now==0)return;
        res.pb(now);
        return;
    }
    pus(res,temp,now+temp[at],at+1);
    pus(res,temp,now,at+1);

}
vector<int> pos(string s){
    vector<int> temp;
    vector<int> res;
    int n =s.size();
    int total = 0;
    int now = 1;
    for(int i =n-1;i>=0;i--){
        if(s[i]=='1'){
            temp.pb(now);
        }
        now*=2;
    }
    pus(res,temp,0,0);
    return res;
}
int convert(string s){
    int target = 0;
    int now = 1;
    for(int i =s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            target+=now;
        }
        now*=2;
    }
    return target;
}
void _solve(){
    int n,m;cin >> n>>m;
    vector<vector<pii>> adj(pow(2,n));
    string source;
    cin >> source;
    int target = convert(source);
    cout << target;
    for(int i =0;i<m;i++){
        int day;
        string a;
        string b;
        cin >>day>>a>>b;
        int aa = convert(a);
        int bb = convert(b);
        cout <<aa<<" "<<bb<<" "<<day<<" "<<endl;
        adj[bb].push_back({day,aa});
        auto tmp = pos(a);
        for(auto t: tmp){
            cout << t<<" ";
            adj[bb].push_back({0,t});
        }
        cout <<i<<endl;
    }
    for(int i =0;i<32;i++){
        cout << i<<":"<<endl;;
        for(auto j:adj[i]){
            cout << j.first<<" "<<j.second<<endl;
        }
    }
    cout <<"===="<<endl;
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    vector<int> dist(pow(2,n), INT_MAX);
    pq.push(make_pair(0, 0));
    dist[0] = 0;
    while (!pq.empty()) {    
        int u = pq.top().second;
        pq.pop();
        for (auto i = adj[u].begin(); i != adj[u].end(); ++i) {
            // Get vertex label and weight of current
            // adjacent of u.
            int v = (*i).first;
            int weight = (*i).second;
 
            
            if (dist[v] > dist[u] + weight) {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    if(dist[target]==INT_MAX){
        cout << -1<<endl;
    }
    else{
        cout << dist[target]<<endl;
    }

 
    // Print shortest distances stored in dist[]
    printf("Vertex Distance from Source\n");

    
    

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