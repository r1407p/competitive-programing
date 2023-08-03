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
    int n;cin >>n;
    vi nums(n,0);
    vi temp;
    for(int i =1;i<n;i++){
        cin >> nums[i];
        temp.pb(nums[i]-nums[i-1]);
    }
    sort(ALL(temp));
    vb used(n+1,false);
    vi dup;
    int k =0;
    // for(int i =0;i<n-1;i++){
    //     cout << temp[i]<<" ";
    // }cout << endl;
    for(int i =0;i<n-1;i++){
         if(temp[i]<=0){
            cout <<"No\n";
            return;
        }
        if(temp[i]<=n&&used[temp[i]]){
            dup.pb(temp[i]);
        }
        if(temp[i]<=n&&!used[temp[i]]){
            used[temp[i]]= true;
            k++;
        }
    }
    if(k==n-1){
        cout << "Yes\n";
    }else if(k==n-2){
        int target;
        if(temp[n-2]>n)target = temp[n-2];
        else{
            if(dup.size()==1)target = dup[0];
        }
        for(int i=1;i<=n;i++){
            if(!used[i])target-=i;
        }
        if(target==0){
            cout <<"Yes\n";
            return;
        }
        cout <<"No\n";
    }else{
        cout <<"No\n";
    }
    return;
    // if(temp[n-2]>n){
    //     int target=temp[n-2];
    //     for(int i=1;i<=n;i++){
    //         if(!used[i])target-=i;
    //     }
    //     if(target==0){
    //         cout <<"Yes\n";
    //         return;
    //     }
    //     cout <<"No\n";
    // }else{
    //     if(k==n-1){
    //         cout << "Yes\n";
    //     }else{
    //         cout <<"No\n";
    //     }
    // }
    // return;


    // for(int i =0;i<n-1;i++){
    //     cout << temp[i]<<" ";
    // }cout << endl;
    // return;
    // int target = -1;
    
    // int k =0;
    // for(int i =0;i<n-1;i++){
    //     // cout << temp[i]<<" ";
    //     if(temp[i]<=0){
    //         cout <<"No\n";
    //         return;
    //     }
    //     if(temp[i]>n){
    //         target = temp[i];
    //     }else{
    //         used[temp[i]]= true;
    //         k++;
    //     }
    // }
    // if(k==n-1&&used[n]==false){
    //     cout <<"Yes\n";
    //     return;
    // }
    // if(k!=n-2){
    //     cout <<"No\n";
    //     return;
    // }
    // for(int i =1;i<=n;i++){
    //     if(!used[i])target-=i;
    // }
    // if(target==0){
    //     cout <<"Yes\n";
    //     return;
    // }
    // cout <<"No\n";
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