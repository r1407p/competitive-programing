#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int _ ;
    cin>>_;
    while (_--){
        long long int n;
        cin >> n;
        vector<pair<long long int,long long int>> pos(n,{0,0});
        
        for(int i =0;i<n;i++){
            cin >> pos[i].first;
        }
        
        long long int mx =  0;
        for(int i =0;i<n;i++){
            cin >> pos[i].second;
            mx = max(mx,pos[i].second);
        }
        if(n==1){
            cout << pos[0].first<<endl;
            continue;
        }
        long long int left =  INT_MIN;
        long long int right = 1000000000000000;
        for(int i =0;i<n;i++){
            pos[i].second = mx-pos[i].second;
            int a = pos[i].first-pos[i].second;
            int b = pos[i].first+pos[i].second;
            pos[i].first = a;
            pos[i].second = b;
            if(a==b){
                left = a;
                right = b;
            }
        }
        if(pos[0].second<=pos[1].first){
            left = pos[0].second;
            right =pos[1].first;
        }
        else if(pos[1].second<=pos[0].first){
            left = pos[1].second;
            right =pos[0].first;
        }
        for(int i =2;i<n;i++){
            if(pos[i].first>left)left = pos[i].first;
            if(pos[i].second<right)right = pos[i].second;
        //    cout << left<<" " <<right<<endl;;
        }
       // cout <<"++++";
        cout<< (double(left+right))/2<<endl;
        
    }
    

}