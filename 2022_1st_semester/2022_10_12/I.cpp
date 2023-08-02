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
    int n ;
    cin >>n;
    vs strs;
    cout <<n;
    map<string,int>mp;
    for(int i =0;i<n;i++){
        string temp;
        cin >>temp;
        strs.eb(temp);
        mp[temp] = i;
    }
    //cout <<"dsaf";
    for(int i =0;i<n;i++){
        string temp;
        cin >> temp;
        int index = mp[temp];
        int _;
        cin >>_;
        string str;
        //cout <<_;
        for(int j =0;j<_;j++){
            cout <<"get"<<endl;
            cin.ignore();
            getline(cin,str);
            cout << str;
            //vs ret = split(str," ");
        }
    }

}
signed main(){
    //ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    //cin >>_;
    while(_--){
        _solve();   
    }

}