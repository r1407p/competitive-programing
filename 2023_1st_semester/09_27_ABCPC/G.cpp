#include<bits/stdc++.h>
#define int long long
using namespace std;

#define endl '\n'
void solve(){
    int n;
    int target;
    cin >> n >> target;
    int flag = false;
    vector<int> used;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if((a&target)==target){
            used.push_back(a);    
            // cout <<a<<" ";
        }
    }
    if(used.size()==0){
        cout <<-1 <<endl;;
        return;
    }
    int temp = used[0];
    for(int i= 1;i<used.size();i++){
        temp&=used[i];
    }
    if(temp!=target){
        cout <<-1 <<endl;;
        return;
    }
    cout << used.size()<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _ = 1;
    cin >> _;
    while(_--)
        solve();
}

