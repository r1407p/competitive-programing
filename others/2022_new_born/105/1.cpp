#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<deque>
using namespace std;

int main(){
    int a,b;
    cin >> a>>b;
    long long int sum =0;
    vector<int> v;
    for(int i =0;i<a;i++){
        char temp1;
        int temp2;
        cin>>temp1>>temp2;
        v.push_back(temp2);
        sum+=temp2;
    }
    sort(v.begin(),v.end());
    long long int temp =0;
    for(int i=0;i<b;i++){
        //cout << v[i];
        temp+=v[i];
    }
    cout <<temp<< " ";
    temp =0;
    for(int i =1;i<=b;i++){
        temp+=v[v.size()-i];
    }
    cout << temp << " ";
    for(int i =1;i<b;i++){
        sum*=(a-i);
        sum/=i;
    }
    cout << sum;

}