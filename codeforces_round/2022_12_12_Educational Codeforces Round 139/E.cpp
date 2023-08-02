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
    vvb can= {{false,false,false,false},
            {false,true,false,true},
            {false,false,true,true},
            {false,true,true,true}};
    int t;
    cin >> t;
    vi nums(t);
    for(int i =0;i<t;i++){
        cin >> nums[i];
    }
    vector<deque<int>> used(1);
    used[0].pb(nums[0]);
    int temp = 1;
    for(int i = 1;i<t;i++){
        bool flag = true;
        for(int j =0;j<used.size();j++){
            if(can[used[j].back()][nums[i]]){
                used[j].pb(nums[i]);
                flag = false;
                break;
            }
        }
        if(flag){
            used.eb(deque<int>(nums[i]));
        }
        temp+= used.size();
    }
    int ans = temp;
    cout << ans;
    for(int i = 0;i<t;i++){
        for(int j =0 ;j<used.size();j++){
            if(used[j].size()!=0){
                if(used[j].front()==nums[i]){
                    used[j].pop_front();
                    if(used[j].size()==0){
                        temp--;
                    }
                    break;
                }
            }
        }
        ans+=temp;
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