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
vvi dis;
int n ;
int ham(pii a, pii b){
    return abs(a.first-b.first)+abs(a.second-b.second);
}
int mx[105];
int my[105];
bool adj[105][105];
bool vy[105];
void construct(int k){
    memset(mx, -1, sizeof(mx));
	memset(my, -1, sizeof(my));
	memset(adj, 0, sizeof(adj));
    for(int i =0;i<k;i++){
        int stu = dis[i][1];//stu
        int tea= dis[i][2]; //tea
        adj[stu][tea]  = true;
    }
    return;
}
bool DFS(int x){
    for(int y =0 ;y<n;y++){
        if(adj[x][y]&&!vy[y]){
            vy[y] = true;
            if(my[y]==-1 ||DFS(my[y])){
                mx[x] = y;
                my[y] = x;
                return true;
            }
        }
    }
    return false;
}
void _solve(){
    cin >> n;
    vpii stu(n);
    vpii tea(n);
    for(int i =0;i<n;i++){
        cin >> stu[i].first>>stu[i].second;
    }
    for(int i =0;i<n;i++){
        cin >> tea[i].first>> tea[i].second;
    }
    vvi grid(n,vi(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            grid[i][j] = ham(stu[i],tea[j]);
           // cout << grid[i][j] <<" ";
            dis.pb({grid[i][j],i,j});
        }//cout << endl;
    }
    sort(ALL(dis));
    
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout << grid[i][j]<<" ";
    //     }cout << endl;
    // }
    int l = 0,r = n*n;
    int mid;
    while(l<r){
        int c = 0;
        mid = (l+r)/2;
        construct(mid);
        for(int i = 0 ;i<n;i++){
            if(mx[i]==-1){
                memset(vy,false,sizeof(vy));
                if(DFS(i))c++;
            }
        }
        // cout <<"=============\n";
        // cout << l <<" "<<r<<" "<<dis[mid][0]<<endl;
        if(c==n){
            r= mid;
        }else{
            l = mid+1;
        }
        // cout << l <<" "<<r<<endl;
    }
    cout << dis[l-1][0];
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