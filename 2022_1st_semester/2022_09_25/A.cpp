#include<bits/stdc++.h>
using namespace std;
int main(){
    int _;
    cin >> _;
    vector<int>mp(105,0);
    while(_--){
        int n ,c;
        cin >> n>>c;
        int ans=0;
        for(int i =0;i<105;i++){
            mp[i] =0;
        }
        for(int i =0;i<n;i++){
            int temp;
            cin >>temp;
            mp[temp]++;
        }
        for(int i =0;i<105;i++){
            if(mp[i]){
                ans+=min(c,mp[i]);
            }
        }
        cout << ans<<endl;
    }
}