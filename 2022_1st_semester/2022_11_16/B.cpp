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
    string str;
    cin >>str;
    auto temp = str.find("happiness");
    //cout << temp;
    if(temp==18446744073709551615){
        cout <<"YES\n";
        for(int i = 0;i<str.size();i++){
            for(int j =i+1;j<str.size();j++){
                string now = str;
                swap(str[i],str[j]);
                if(now.find("happiness")==18446744073709551615){
                    cout <<i+1<<" "<<j+1<<endl;
                    return;
                }
            }
        }
        return;
    }else{
        string str2 = str.substr(temp+9);
        //cout <<str2;
        auto temp2 = str2.find("happiness");
        //cout <<temp2; 
        if(temp2==18446744073709551615){
            cout <<"YES\n";
            cout << temp+1<<" "<< temp+2;
            return;
        }else{
            string str3 = str2.substr(temp2+9);
            //cout <<str[temp+1];
            //cout << str[temp+temp2+11];
            auto temp3 = str3.find("happiness");
            if(temp3==18446744073709551615){
                cout <<"YES\n";
                cout << temp+1<<" "<<temp+9+temp2+2;
                return;
            }
            else{
                cout << "NO\n";
            }
        }
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