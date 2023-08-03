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
    int n,m;
    cin >> n>>m;
    string s;
    cin >>s;
    vi zero(n,-1);
    vi one(n,-1);
    vi ones(n,0);
    bool flag  = true;
    if(s[0]=='1'){
        ones[0] = 1;
    }
    for(int i =1;i<n;i++){
        if(s[i]=='1'){
            ones[i] = ones[i-1]+1;
        }else{
            ones[i] = ones[i-1];
        }

    }
    zero[0] = 0;
    for(int i =1;i<n;i++){
        if(s[i]=='0'){
            if(s[i-1]=='0'){
                zero[i]= zero[i-1];
            }else{
                zero[i] = i;
            }
        }else{
            if(s[i-1]=='1'){
                zero[i]= i;
            }else{
                zero[i] = zero[i-1];
            }
        }
    }
    one[n-1] = n-1;
    for(int i =n-2;i>=0;i--){
        if(s[i] == '1'){
            if(s[i+1]=='1'){
                one[i] = one[i+1];
            }else{
                one[i] = i;
            }
        }else{
            if(s[i+1]=='1'){
                one[i] = one[i+1];
            }else{
                one[i] = i;
            }
        }
    }
    // for(int i =0;i<n;i++){
    //     cout << zero[i];
    // }cout << endl;
    // for(int i =0;i<n;i++){
    //     cout << one[i];
    // }cout << endl;
    vvi nums(m,vi(2));
    for(int i =0;i<m;i++){
        cin >> nums[i][0]>>nums[i][1];
        nums[i][0]-=1;
        nums[i][1]-=1;
        // if(s[nums[i][0]] == '0')
            nums[i][0] = zero[nums[i][0]];
        // if(nums[i][1]!=n-1&&s[nums[i][1]+1] == '1')
            nums[i][1] = one[nums[i][1]];
        // cout << nums[i][0]<<" "<<nums[i][1]<<endl;;
    }
    sort(ALL(nums));
    int res = 0;
    int j =0;
    vi no(n);
    int now = n-1;
    no[n-1] = now;
    for(int i = n-2;i>=0;i--){
        if(s[i]=='1'&&s[i+1]=='0'){
            now = i;
        }
        no[i] = now;
    }
    // for(int i =0;i<n;i++){
    //     cout << no[i]<<" ";
    // }cout << endl;

    bool nochange = false;
    // cout <<nums[0][0]<<" "<<no[nums[0][0]]<<" "<<nums[0][1]<<endl;
    if(no[nums[0][0]]>=nums[0][1]){
        nochange = true;
    }else{
        res+=1;
    }
    // cout << res<< nochange<<endl;;
    for(int i=1;i<m;i++){
        if(nums[i]!=nums[i-1]){
            if(no[nums[i][0]]>=nums[i][1]){
                nochange = true;
            }else{
                res+=1;
            }
        }
    }
    cout << res+nochange<<endl;



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