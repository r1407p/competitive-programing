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
    int n ;
    cin >> n;
    vi nums(n);
    vi odd;
    vi even;
    for(int i =0;i<n;i++){
        cin >>nums[i];
        if(nums[i]%2)odd.pb(nums[i]);
        else even.pb(nums[i]);
    }
    sort(ALL(odd));
    sort(ALL(even));
    int i=0,j =0;
    while(i<odd.size()&&j<even.size()){
        if(nums[i+j]%2){
            if(odd[i]>even[j]){
                cout << "No\n";
                return;
            }
            i++;
        }else{
            if(odd[i]<even[j]){
                cout << "No\n";
                return;
            }
            j++;
        }
    }
    cout <<"Yes\n";
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