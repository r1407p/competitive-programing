#include <iostream>
#include "testlib.h"
using namespace std;
int main(int argc, char *argv[]){
    registerValidation(argc, argv);
    int t = inf.readInt(1,100,"t");
    inf.readEoln();
    for(int i =0;i<t;i++){
        string n = inf.readWord("[1-9][0-9]{4,99}","n");
        inf.readSpace();
        string k = inf.readWord("[1-9][0-9]{1,17}","k");
        inf.readEoln();
    }
    inf.readEof();
}