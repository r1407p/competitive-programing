#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream fin("tabs.in");

int main(){
    int n ;
    fin >> n; 
    for(int i =0;i<n;i++){
        int a,b;
        fin >> a>>b;
        if(a==1){
            cout << 0<<endl;;
        }
        else if(b==1){
            cout <<1<<endl;
        }else if(a==b){
            cout <<1<<endl;
        }else{
            cout <<2<<endl;
        }
        
    }
}