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

void _solve(){
    int n ,k;
    cin >>n>>k;
    vs strs;
    string ans="";
    for(int i =0;i<n;i++){
        string temp;
        cin >>temp;
        strs.push_back(temp);
    }
    vi nums(n,0);
    for(int i=0;i<k;i++){
        int index = 0;
        int mx = nums[0];
        for(int j =0;j<n;j++){
            if(nums[j]>mx){
                mx = nums[j];
                index = j;
            }
        }
        char flag = '0';
        if(strs[index][i]=='1'){
            ans+='0';
            flag = '0';
        }else{
            ans+='1';
            flag = '1';
        }
        for(int j =0;j<n;j++){
            if(strs[j][i]==flag){
                nums[j]++;
            }
        }
    }
    cout <<ans;

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