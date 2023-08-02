#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    a =8-abs(8-a);
    b =8-abs(8-b);
    if(a<b)swap(a,b);
    if(b%2)cout <<"black";
    else cout <<"white";
}