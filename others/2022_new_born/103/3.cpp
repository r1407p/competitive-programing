#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
string word;
int n ;
vector<int> ans;
void next(int index,int now){
   // cout <<index;
    if(index==n){
       // cout <<now;
        auto it = lower_bound(ans.begin(), ans.end(), now);
        //cout << (it==ans.end());
        if(it==ans.end())ans.push_back(now);
        else if(*it!=now){
        ans.insert(it,now);
        }
    }else{
        next(index+1,now*10+word[index]-'0');
        next(index+1,now);
    }
}
int main(){
    while(cin>>word){
        ans.clear();
        n = word.size();
        next(0,0);
        bool flag = false;
        for(int i =0;i<n;i++){
            if(word[i]=='0')flag = true;
        }
        if(!flag)ans.erase(ans.begin());
        cout << ans.size()<<endl;
        for(auto u:ans){
            cout << u<<" ";
        }
        cout << endl<<endl;
}
    
    
}