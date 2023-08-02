#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n =0;
    cin >>n;
    vector<double> dp(n+1,0);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=6;j++){
            dp[i]+=max(dp[i-1],1.0*j)/6.0;
        }
    }
    cout <<setprecision(11)<<dp[n];
}