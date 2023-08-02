#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<deque>
using namespace std;

int main(){
    char mode;
    int up ,down;
    while(cin >>mode){
        if(mode=='r'){
            cin>>down>>up;
        }else if(mode=='i'){
            int t;
            cin>>t;
            deque<int> v;
            v.clear();
            for(int i =0;i<t;i++){
                int temp;
                cin>>temp;
                if(temp>0)v.push_back(temp);
                else if(temp) v.push_front(temp);
            }
            
            
        }
    }
}