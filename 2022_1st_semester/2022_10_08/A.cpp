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
int tree[maxn][3] = {};
int index = 1;
int a,b;
bool flag = false;
int build(int sum){
    if(sum ==0)return 0;
    //cout << index<<":"<<sum<<"|";
    int now = index;
    index++;
    int use;
    if(sum==1){
        if(a){
            tree[now][0] = 1;
            a--;
        }else{
            flag = false;
            return 0;
        }
    }
    else if(b){
        tree[now][0] = 2;
        b--;
    }else{
        tree[now][0] = 1;
        a--;
    }
    if(b&!a){
        flag = true;
        return 0;
    }
    sum-= tree[now][0];
    int temp = sum/2;
    //cout << sum-temp<<"|"<<temp<<endl;
    if(sum-temp)tree[now][1] = build(sum-temp);
    if(sum)tree[now][2] = build(temp);
    return now;
}
void _solve(){
    cin >>a>>b;
    int t = a+b;
    int sum = a+2*b;
    build(sum);
    if(flag){
        cout << -1;
        return ;
    } 
    for(int i =1;i<=t;i++){
        cout <<tree[i][0]<<" "<<tree[i][1]<<" "<<tree[i][2]<<endl;
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