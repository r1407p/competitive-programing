#include<bits/stdc++.h>
using namespace std;
int main(){
    int _ ;
    cin>>_;
    while (_--){
        string s;
        cin >>s;
        vector<int>sum(15,0);
        vector<bool>used(15,0);
        for(int i =0;i<11;i++){
            sum[i]=0;
            used[i] = false;
        }
        for(int i=s.size()-1;i>=0;i--){
        //    cout << s[i];
            if((used[s[i]-'0'])){
                sum[s[i]-'0'+1]++;
            }else{
                for(int j = s[i]-'0'+1;j<11;j++){
                    used[j] = true;
                }
                sum[s[i]-'0']++;
            }
        }
        for(int i =0;i<10;i++){
            for(int j =0;j<sum[i];j++){
                cout <<i;
            }
        }
        for(int i =0;i<sum[10];i++){
            cout <<'9';
        }
        cout << endl;
    }
}