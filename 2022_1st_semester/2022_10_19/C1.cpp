    #include<bits/stdc++.h>
    
    
    using namespace std;


    //#define int long long 
    #define endl '\n'
    #define eb emplace_back
    #define pb push_back
    #define ALL(X) X.begin(), X.end()

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
    int dis[maxn], vis[maxn], mul[maxn];
    bool used[maxn];
    vector<int> g[maxn];
    ifstream fin("test.txt");
    void _solve(){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < m; i++) {
            int b, c; cin >> b >> c;
            g[b].pb(c);
            g[c].pb(b);
        }
        queue<int> qu;
        qu.push(1);
        used[1] = true;
        int layer =0;
        while(qu.size()){
            
            int l = qu.size();
            for(int i =0;i<l;i++){
                int now = qu.front();qu.pop();
               // cout<<"dsf"<<now <<endl;
                for(auto k:g[now]){
                   // cout <<k<<endl;
                    if(k==n){
                        cout << layer<<endl;
                        return;
                    }
                    if(!used[k]){
                        used[k] = true;
                        qu.push(k);
                    }
                }

            }
            layer++;
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