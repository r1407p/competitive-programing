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
    int n;cin >> n;
    vpii nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i].first;
    }
    for(int i =0;i<n;i++){
        cin >> nums[i].second;
    }
    int ans =0;
    sort(ALL(nums));
    for(int i =0;i<n;i++){
        ans+=nums[i].first* i  -nums[i].first*(n-i-1);
        swap(nums[i].first,nums[i].second);
    }
    //cout << ans;
    sort(ALL(nums));    
    for(int i =0;i<n;i++){
        ans+= nums[i].first* i -nums[i].first*(n-i-1);
    }
    //cout << ans;
    int sum =0;
    for(int i =0;i<n;i++){
        int a = nums[i].first;
        int b = nums[i].second;
        nums[i].first = a+b;
        nums[i].second = a-b;
    }
    sort(ALL(nums));
    for(int i =0;i<n;i++){
         sum += nums[i].first* i  -nums[i].first*(n-i-1);
        swap(nums[i].first,nums[i].second);
    }
    sort(ALL(nums));    
    for(int i =0;i<n;i++){
        sum += nums[i].first* i -nums[i].first*(n-i-1);
    }
	//cout << ans <<endl;
    //cout << sum<<endl;
    sum /=2;
    
    cout <<2* (ans-sum)<<endl;
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