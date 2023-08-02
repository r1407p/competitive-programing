#include <iostream>
#include <string>

using namespace std;
int main(){
    long long int temp;
    cin >> temp;
    temp %= 998244353 ;
    cout << (temp>0 ? temp :temp+998244353);
    return 0;
}