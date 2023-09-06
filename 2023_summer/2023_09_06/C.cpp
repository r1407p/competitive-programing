#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>

#define endl '\n'
#define all(v) begin(v),end(v)
#define mp(x,y) make_pair(x,y)
#define mpp(w,x,y,z) mp(mp(w,x),mp(y,z))
#define ub upper_bound
#define lb lower_bound
#define fst first
#define scd second
#define eb emplace_back
#define pb push_back

#ifndef lolainta
#define DBN(...)
#define DBN1D(...)
#define DBN2D(...)
#define dbn(...)
#endif

using namespace std;

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

template<typename T>using Prior=priority_queue<T>;
template<typename T>using prior=priority_queue<T,vector<T>,greater<T>>;

const loli md=998244353;
// const int inf=0x3fffffff;
const loli inf=1ull<<60;

inline loli mod(const loli&x){
    return (x%md+md)%md;
}
inline loli mod(const loli&x,const loli&m){
    return (x%m+m)%m;
}

void pre(){

}
ifstream fin("overcode.in");

void solve(){
    
    int n;
    fin>>n;
    vl arr(n);
    for(auto&x:arr)
        fin>>x;
    sort(all(arr));
    int ans=0;
    if(n<6){
        cout <<0<<endl;
        return ;
    }
    int last=INT_MIN;
    int cnt=0;
    int i =0;
    int j =5;
    while(j<n){
        // cout <<arr[i]<<" "<<arr[j]<<endl;
        if(arr[i]+1000>=arr[j]){
            ans++;
            i = i+6;
            j = j+6;
        }else{
            i++;
            j++;
        }
    }
    cout << ans<<endl;    
    


}

int main(){
    cout<<fixed<<setprecision(8);
    ios_base::sync_with_stdio(false);cin.tie(0);
 
 
    int _=1;

    fin >>_;
    while(_--){
        solve();
    }
}
