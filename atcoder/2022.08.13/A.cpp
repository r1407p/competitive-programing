#include <iostream>
#include <string>

using namespace std;
int main(){
    string in = "atcoder";
    int a,b;
    cin >> a>>b;
    a--;
    b--;
    for(a;a<=b;a++){
        cout <<in[a];
    }
}