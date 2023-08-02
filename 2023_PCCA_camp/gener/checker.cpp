#include <iostream>
#include "Bigint.hpp"
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]){
    registerTestlibCmd(argc, argv);
    int t = inf.readInt(1,100,"t");
    bool flag = true;
    for(int i =0;i<t;i++){
        string pans_1 = ouf.readWord("[1-9][0-9]{4,99}","pans_1");
        string pans_2 = ouf.readWord("[1-9][0-9]{1,17}","pans_2");
        string jans_1 = ans.readWord("[1-9][0-9]{4,99}","jans_1");
        string jans_2 = ans.readWord("[1-9][0-9]{1,17}","jans_2");
        BigInt jans_1_big = jans_1;
        BigInt jans_2_big = jans_2;
        if(pans_1!= jans_1 || jans_1_big%jans_2_big!=0)
            flag  = false;
    }
    if(flag)
        quitf(_ok,"The ans is correct.");
    else
        quitf(_wa,"The ans is incorrect.");
}