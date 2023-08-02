#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    string word;
    cin >> word;
    vector<int> now;
    map<char,int> mp;
    mp['a'] = 0;
    mp['t'] = 1;
    mp['c'] = 2;
    mp['o'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['r'] = 6;
    for(auto w:word){
        now.push_back(mp[w]);
    }
    int ans =0;
    for(int i =0;i<7;i++){
       // cout <<now[i];
        for(int j = i+1;j<7;j++){
            if(now[i]>now[j])ans++;
        }
        //cout <<ans<<endl;;
    }
    cout<<ans;
}