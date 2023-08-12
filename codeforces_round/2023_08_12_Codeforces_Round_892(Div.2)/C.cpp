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
    int n;
    cin >> n;
    int res =0;
    for(int i =0;i<=n;i++){
        vi temp;
        for(int j =1;j<=n-i;j++){
            temp.pb(j*j);
        }
        for(int j = 0;j<i;j++){
            temp.pb((n-j)*(n+j-i+1));
        }
        sort(ALL(temp));
        int t =0;
        for(int i =0;i<n-1;i++){
            t+=temp[i];
        }
        res = max(res,t);
    }
    cout << res<<endl;
    // for(int i =n;i>=1;i--){
    //     int temp =0;
    //     for(int j=  n;j>=1;j--){
    //         vi temp = {i*j};
    //         int a =1;
    //         int b =1;
    //         for(int k =0;k<n-1;k++){
    //             if(a==i)a++;
    //             if(b==j)b++;
    //             temp.pb(a*b);
    //             a++;
    //             b++;
    //         }
    //         int t =0;
    //         sort(ALL(temp));
    //         for(int i =0;i<n-1;i++){
    //             cout << temp[i] <<" ";
    //             t+=temp[i];
    //         }cout << temp[n-1]<<" "<<t<<endl;
    //         res = max(res,t);
    //     }
    // }
    // cout << res <<endl;
    
}
signed main(){
    // ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }

}