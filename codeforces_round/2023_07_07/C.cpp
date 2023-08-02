#include<bits/stdc++.h>
 
 
using namespace std;


#define int long long 
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
    int a,b,time;
    cin >> a>>b>>time;
    vector<vector<int>> nums(a,vi(b));
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cin >> nums[i][j];
        }
        sort(ALL(nums[i]));
    }
    vector<pii> total(a,{0,0});
    for(int i =0;i<a;i++){
        int now  = 0;
        for(int j =0;j<b;j++){
            now+=nums[i][j];
            if(now<=time){
                total[i].first+=1;
                total[i].second+=now;
            }else{
                break;
            }
        }
    }
    int res = 1;
    //cout << total[0].first<<" "<<total[0].second<<endl;
    for(int i = 1;i<a;i++){
       // cout << total[i].first<<" "<<total[i].second<<endl;
        if(total[i].first>total[0].first){
            res++;
            continue;
        }
        if(total[i].first == total[0].first){
            if(total[i].second <total[0].second){
                res++;
            }
        }

    }
    cout << res<< endl;

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }

}