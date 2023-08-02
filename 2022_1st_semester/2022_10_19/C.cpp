#ifdef tony
#define cerr cout
#endif
#ifndef tony
#define DBN(...)
#define dbn(...)
#define DBN1D(...)
#define DBN2D(...)
#endif
#include<bits/stdc++.h>
#define eb emplace_back
#define pb push_back
#define X first
#define Y second
#define CLR(x, y) memset(x, y, sizeof(x))
#define ALL(X) X.begin(), X.end()
#define io_o() ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define For(i, n) for(int i = 0; i < n; i++)
#define For1(i, n, m) for(int i = n; i < m; i++)
#define For2(X) for(auto x : X)
#define maxn 200005
#define pi = acos(-1)
using namespace std;
typedef long long ll;
const ll mod = (1e9)+7;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
//sort(a, a+n, greater<int>());
// int a[maxn];
vector<int> g[maxn];
 
// int dis[maxn], vis[maxn];
// void dijk(int n) {
//     CLR(dis, -1);
//     dis[1] = 0;
//     priority_queue<pll, vector<pll>, greater<pll>> pq;
//     pq.push({0, 1});
//     while(!pq.empty()) {
//         int cur = pq.top().Y;
//         if(vis[cur]) continue;
//         vis[cur] = 1;
//         For2(g[cur]) {
//         }
//     }
// }
 
int dis[maxn], vis[maxn], mul[maxn];
//ifstream fin("test.txt");
void _solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int b, c; cin >> b >> c;
        g[b].pb(c);
        g[c].pb(b);
    }
    deque<int> q;
    q.push_back(1);
    vis[1] = 1;
    int fg = 1;
    while(!q.empty() && fg) {
        // cout << q.size() << ' ' << flush;
        int cur = q.back(); q.pop_back();
        // if(vis[cur]) {
        //     mul[cur] = 1;
        //     continue;
        // }
        // vis[cur] = 1;
        For2(g[cur]) {
            if(vis[x]) continue;
            dis[x] = dis[cur] + 1;
            vis[x] = 1;
            mul[x] = max(mul[x], mul[cur]);
            if(x == n) {
                fg = 0;
                break;
            }
            q.push_back(x);
        }
    }
    // cout << dis[n] << ' ' << mul[n] 
    cout << dis[n] - 1 << '\n';
}
 
int main(){
    io_o(); //cute!
    int t = 1;
    // cin >> t;
    while(t--) {
        _solve();
    }
    return 0;
}
 