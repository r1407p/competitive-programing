#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    for(int i =0 ;i<100;i++){
        int t =i;
    
    int temp = t/3;
    int rest = t-3*temp;
    //cout <<temp<<" "<< rest<<endl;
    int ans = temp*7;
    if(rest==2)ans+=1;
    if(rest==1)ans-=3;
    cout <<ans << endl;
    }
}