#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define  vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pb push_back
#define ALL(x) x.begin(),x.end()

int maxn = 1e5+5;
vector<int> segment_tree(maxn*4,0);
void build(int l,int r,int index){
    if(l==r){
        segment_tree[index] = 0;
        return;
    }
    int mid = (l+r)/2;
    build(l,mid,index*2);
    build(mid+1,r,index*2+1);
    segment_tree[index] = segment_tree[index*2]+segment_tree[index*2+1];
}
void update(int pos,int val,int l,int r,int index){
    if(l==r){
        segment_tree[index] = val;
        return;
    }
    int mid = (l+r)/2;
    if(pos<=mid){
        update(pos,val,l,mid,index*2);
    }else{
        update(pos,val,mid+1,r,index*2+1);
    }
    segment_tree[index] = segment_tree[index*2]+segment_tree[index*2+1];
}

void add(vi &a,vi &b){
    for(int i =0;i<a.size();i++){
        a[i]+=b[i];
    }
}
void sub(vi &a,vi &b){
    for(int i =0;i<a.size();i++){
        a[i]-=b[i];
    }
}
bool smaller(vi &a,vi &b){
    for(int i =0;i<a.size();i++){
        if(a[i]>b[i]){
            return false;
        }
    }
    return true;
}

void __solve(){
    int n,m;
    cin >> n>>m;
    int now = 0;
    map<int,int> at;
    vi have;
    vvi from(m+5);
    vb is_material(m+5,false);
    for(int i =0;i<m;i++){
        int t;
        cin >>t;
        if(t==0){// is materia
            int p;
            cin >> p;
            is_material[i] = true;
            have.pb(p);
            at[i] = now;
            now++;
            from[i].pb(i);
        }else{
            for(int j = 0;j<t;j++){
                int p;
                cin >> p;
                from[i].pb(p-1);
            }
        }
    }
    // cout <<"================\n";
    vvi dp(m+5,vi(now,0));
    for(int i = m-1;i>=0;i--){
        if(is_material[i]){
            dp[i][at[i]] = 1;
        }else{
            for(int j =0;j<from[i].size();j++){
                add(dp[i],dp[from[i][j]]);
            }
        }
    }
    // for(int i =0;i<m;i++){
    //     for(int j =0;j<now;j++){
    //         cout << dp[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }
    int mxn = 1<<n;
    int res = 0;
    for(int i =0;i<mxn;i++){
        // cout <<i <<endl;
        vi need(now,0);
        int k =0;
        for(int j =0;j<n;j++){
            if(i&(1<<j)){
                add(need,dp[j]);
                k++;
            }
        }
        // for(auto x:need){
        //     cout <<x<<" ";
        // }cout <<endl;
        if(smaller(need,have)){
            res = max(res,k);
        }
    }
    cout << res<<endl; 
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