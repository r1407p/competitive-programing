#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define int long long
#define pb push_back
// #define mp make_pair
#define ALL(x) x.begin(),x.end()

void __solve(){
    int n ;
    cin >> n;
    vpii v(n);
    for(int i =0;i<n;i++){
        cin >> v[i].second >> v[i].first;
    }
    sort(ALL(v));
    for(auto x: v){
        cout << x.first << " " << x.second << endl;
    }
    map<int,int> mp;
    int res =0;
    int now = n;
    int temp = 0;
    mp[v[n-1].second]+=1;
    for(int i =n-2;i>=0;i--){
        if(v[i]==v[i+1]){
            res+=temp;
            mp[v[i].second]+=1;
            continue;
        }else{
            if(v[i].first<v[i+1].first){
                now = i+1;
            }
            temp = n-now;
            temp-=mp[v[i].second];
            cout << i << " " <<now<<" "<< temp << endl;
            mp[v[i].second]+=1;
            res+=temp;
        }
        
    }
    cout <<res<<endl;
    
}
signed main(){
    __solve();
}