#include <iostream>
#include "testlib.h"
#include <regex>

using namespace std;

int main(int argc, char *argv[]){
    //registerTestlibCmd(argc, argv);
    registerGen(argc, argv,atoi(argv[0]));
    cout << argc <<endl;
}