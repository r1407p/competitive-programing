#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int x;
    cin >>x;
    if(x<=-3){
        cout << -(x+4)*(x+4)+8<<endl;;
    }else if(x<=2){
        cout << -2*x+1<<endl;
    }
    else{
        cout << x*x*x-14*x+17<<endl;
    }

}