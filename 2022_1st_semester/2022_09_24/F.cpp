
#include<bits/stdc++.h>
 
using namespace std;
int main(){
    string temp;
    ifstream fin("fraud.in");
    ofstream fout("fraud.out");
    fin>>temp;
    int _;
    fin >>_;
    //int ans = 0;
    vector<string> used;
    while(_--){
        string now;
        fin >> now;
        bool flag = true;
        if(temp.size()!=now.size())continue;
        for(int i =0;i<temp.size();i++){
            if(temp[i]=='*')continue;
            else{
                if(temp[i]!=now[i]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            used.push_back(now);
            //ans++;
        }
    }
    fout << used.size()<<endl;
    for(auto s:used){
        fout << s<< endl;
    }
 
}