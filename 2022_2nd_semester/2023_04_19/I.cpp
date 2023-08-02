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
vector<bool> is_prime(100005,true);
vi prime;
bool Isprime(int temp){
    for(auto p :prime){
        if(temp%p==0)return false;
    }
    return true;
}
void _solve(){
    is_prime[0] = false;
    is_prime[1] = false; 
    for(int i = 2;i<100005;i++){
        if(!is_prime[i])continue;
        for(int j = i*2;j<100005;j+=i){
            is_prime[j] = false;
        }
    }
    for(int i = 0;i<100005;i++){
        if(is_prime[i])prime.pb(i);
    }
    int q;
    cin >> q;
    if(q==1){
        cout <<"no";
        return;
    }
    
    for(auto p:prime){
        int temp = q;
        while(temp!=1){
            if(temp%p==0){
                temp/=p;
            }else break;
        }
        if(temp==1){
            cout << "yes";
            return;
        }
    }
    if(Isprime(q)){
        cout <<"yes";
        return;
    }
    cout << "no";
    return;
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