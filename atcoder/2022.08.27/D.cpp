#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n =0;
    cin >>n;
    vector<int> time(1,0);
    vector<int> at(1,0);
    vector<int> val(1,0);
    vector<long long int >dp(n+1,0);
    dp[0] = 0;
    for(int i =1;i<=n;i++){
        int temp;
        cin>> temp;
        time.push_back(temp);
        cin>> temp;
        at.push_back(temp);
        cin>> temp;
        val.push_back(temp);
    }
    int now =0;
    for(int i =1;i<=n;i++){
        for(int j =max(0,i-4);j<i;j++){
            if(dp[j]==-1)continue;
            if(time[i]-time[j]>=abs(at[i]-at[j])){
                dp[i] = max(dp[i],dp[j]+val[i]);
            }else{
                dp[i] = max(dp[i],dp[j]);
            }
            cout << i <<" "<<dp[i]<<endl;
        }
    }
    dp[n] = max(dp[n],(long long int)0);
    cout <<dp[n];

}