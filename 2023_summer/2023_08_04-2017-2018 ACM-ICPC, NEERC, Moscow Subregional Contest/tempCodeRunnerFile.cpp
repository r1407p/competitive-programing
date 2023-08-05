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
    int t,n,m;
    cin >> t>>n>>m;
    vvi nums(m,vi(2));
    for(int i =0;i<m;i++){
        cin >> nums[i][0]>>nums[i][1];
    }  
    for(int i = 1;i<m;i++){
        if(nums[i][0]-nums[i-1][0]<abs(nums[i][1]-nums[i-1][1])){
            cout  << "No\n";
            return;
        }
    }
    int mn = 0;
    if(nums[0][0]>=nums[0][1]){
        mn = nums[0][1]*(nums[0][1]+1)/2;
    }else{//2 5
        mn = nums[0][0]*(nums[0][1]+nums[0][1]-nums[0][0]+1)/2;
    }
    int mx = 0;
    mx = nums[0][0]*(nums[0][1]+nums[0][0]+nums[0][1]-1)/2;
    // cout << mx <<endl;
    for(int i =1;i<m;i++){
        int length = nums[i][0]-nums[i-1][0];
        int move = nums[i][1]-nums[i-1][1];
        int up = (length-abs(move))/2;
        int down = (length-abs(move))/2;
        int stay = (length-abs(move))%2;
        if(move>0)up+=move;
        else down -=move;

        int now = nums[i-1][1];
        mx += ((now+1)+(now+up))*up;
        mx += stay*(now+up);
        mx += (now+up-1+now+up-down)*down/2;

        mn += ((now-1)+(now-down))*down;
        mn += stay*(now-down);
        mn += (now-down+1 + now-down+up)*up/2;

    }
    int now = nums[m-1][1];
    int length = n-nums[m-1][0];
    mx += (now+1+now+length)*length/2;
    if(now>=length){
        mn += (now-1+now-length)*length/2;
    }else if (now == 0){

    }else{
        mn += (now-1)*now/2;
    }
    if(mx>=t && t>=mn){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    // cin >>_;
    while(_--){
        _solve();   
    }

}