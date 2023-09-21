#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define  vi vector<int>
#define pb push_back
#define ALL(x) x.begin(),x.end()
vector<pair<int,int>> pos;
vector<int> u;
vector<pair<int,int>> bound;
const int maxn = 1e5*4;


void __solve(){
    int n,k;
    cin >> n>>k;
    int res = 0;
    for(int i =0;i<n;i++){
        int a,b;
        cin >> a>>b;
        pos.pb({a,b});
        if(b-a>=k){
            res++;
        }else{
            a%=k;
            b%=k;
            if(a>b){
                bound.pb({a,k-1});
                bound.pb({0,b});
                u.push_back(0);
                u.push_back(a);
                u.push_back(b);
                u.push_back(k-1);
            }else{
                bound.pb({a,b});
                u.push_back(a);
                u.push_back(b);
            }
        }
    }
    sort(ALL(u));
    u.resize(unique(ALL(u))-u.begin());
    vi nums(u.size()+50,0);
    // cout <<res<<endl;
    for(int i =0;i<bound.size();i++){
        // cout <<bound[i].first<<" "<<bound[i].second<<endl;
        bound[i].first = upper_bound(ALL(u),bound[i].first)-u.begin();
        bound[i].second = upper_bound(ALL(u),bound[i].second)-u.begin();
        // cout <<bound[i].first<<" "<<bound[i].second<<endl;
        // cout <<"===============\n";
        int start = bound[i].first;
        int end = bound[i].second;
        nums[start]+=1;
        nums[end+1]-=1;
    }
    int now =0;
    int mx =0;
    for(int i =0;i<nums.size();i++){
        now += nums[i];
        mx = max(mx,now);
    }
    cout <<res+mx<<endl;
}
signed main(){
    int t = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cin >>t; 
    while(t--){
        __solve();
    }
}