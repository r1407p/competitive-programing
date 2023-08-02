
#include <iostream>
#include "testlib.h"
#include "Bigint.hpp"
#include <regex>

using namespace std;
int i = 0;
void _gen(){
        vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
        int len_n = rnd.next(5,99);
        //cout << len_n <<endl;
        vector<BigInt> used(100,0);
        BigInt n = 1;
        while(n.to_string().size()<len_n){
            int temp = rnd.next(0,24);
            used[temp]+=1;
            n*=prime[temp];
        }
        BigInt k = 1;
        for(int i = 0 ;i<100;i++){
            //cout << used[i] <<" ";
            k*=(used[i]+1);
        }//cout << endl;
        //cout << n <<" "<<k<<endl;
        string str_n = n.to_string();
        string str_k = k.to_string();    
        len_n = str_n.size();
        int len_k = str_k.size();
        if(len_n<5||len_n>100||len_k<2||len_k>18){
            i--;
            return;
        }
        int change_n = rnd.next(0,len_n-1);
        int change_k = rnd.next(0,len_k-1);
        //cout << str_n << " " << str_k << endl;
        if(change_n==0){//no leading zero
            int nw = str_n[0]-'0';
            nw += rnd.next(1,8);
            if(nw>=10)nw++;
            nw %=10;
            str_n[0] = '0'+nw;
        }else{
            int nw = str_n[change_n]-'0';
            nw += rnd.next(1,9);
            nw %=10;
            str_n[change_n] = '0'+nw;
        }
        if(change_k==0){//no leading zero
            int nw = str_k[change_k]-'0';
            nw += rnd.next(1,8);
            if(nw>=10)nw++;
            nw %=10;
            str_k[change_k] = '0'+nw;
        }else{
            int nw = str_k[change_k]-'0';
            nw += rnd.next(1,9);
            nw %=10;
            str_k[change_k] = '0'+nw;
        }
        cout << str_n << " " << str_k << endl;
}
int main(int argc, char *argv[]){
    registerGen(argc, argv,atoi(argv[0]));
    int t = argc;
    cout << t << endl;
    for(i = 0; i < t; i++){
        _gen();
    }   
}