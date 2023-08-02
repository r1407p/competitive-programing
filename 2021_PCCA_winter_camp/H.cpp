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
    int n ,m,k;
    cin >> n >> m>>k;
    vvi road(n+1);
    for(int i =0;i<m;i++){
        int a,b;
        cin >> a>>b;
        road[a].eb(b);
        road[b].eb(a);
    }
    if(k==1){
        cout <<n;
        return;
    }else if(k>2){
        cout <<"1";
        return;
    }else{
        vi temp(n+1,-1);
       
        temp[1] = 0;
        queue<int>qu;
        qu.push(1);
        while(qu.size()){
            int pivot = qu.front();
            qu.pop();
            int now = temp[pivot];
            for(auto j:road[pivot]){
                if(temp[j]==-1){
                    qu.push(j);
                    temp[j] = (now+1)%2;
                }else{
                    if(temp[j]==now){
                        cout << "1";
                        return;
                    }
                }
            }
        }
        int ans =0;
        for(int i =1;i<=n;i++){
            if(temp[i])ans++;
        }
        cout<< max(ans,n-ans);

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