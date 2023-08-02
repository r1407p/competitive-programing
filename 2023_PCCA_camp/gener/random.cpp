#include <iostream>
#include "testlib.h"
#include "Bigint.hpp"
#include <regex>

using namespace std;

int main(int argc, char *argv[]){
    registerGen(argc, argv,atoi(argv[0]));
    int t = argc;
    cout << t << endl;
    for(int i = 0; i < t; i++){
        int len_n = rnd.next(5,99);
        int len_k = rnd.next(2,min(len_n-2,17));
        //cout << len_n <<" "<<len_k<<endl;
        BigInt k = 1;
        BigInt n = 1;
        while(k.to_string().size()<len_k){
            k*= rnd.next(1,99);
        }
        n = k;
        while(n.to_string().size()<len_n){
            n*= rnd.next(1,99);
        }
        string str_n = n.to_string();
        string str_k = k.to_string();    
        len_n = str_n.size();
        len_k = str_k.size();
        if(len_n<5||len_n>100||len_k<2||len_k>18){
            i--;
            continue;
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
}