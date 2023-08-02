#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> list;
    for(int i =0;i<t;i++){
        int n,x;
        cin >> n >>x;
        list.clear();
        for(int j=0;j<n;j++){
            int temp;
            cin >> temp;
            list.push_back(temp);
        }
        int ans =0;
        int mn = list[0];
        int mx = list[0];
        for(int j =1;j<n;j++){
            if(list[j]<mn){
                if(mx-list[j]>2*x){
                    ans++;
                    mn = list[j];
                    mx = list[j];
                }else{
                    mn = list[j];
                }
            }else if(list[j]>mx){
               // cout << list[j]-mn;
                if(list[j]-mn>2*x){
                    ans++;
                    mn = list[j];
                    mx = list[j];
                }else{
                    mx = list[j];
                }
            }
        }
        cout << ans<<endl;

    }
}