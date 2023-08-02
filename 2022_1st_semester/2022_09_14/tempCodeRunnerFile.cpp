#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0;i< t;i++){
        int n ,m;
        cin >>n>>m;
        vector<int> list;
        list.clear();
        for(int i=0;i<m;i++){
            int temp;
            cin >> temp;
            list.push_back(temp);
        }
        sort(list.begin(),list.end());
        int temp = list[0];
        for(int i=0;i<m-1;i++){
            list[i] =list[i+1]-list[i]-1;
        }
        list[m-1] = n-list[m-1]+temp-1;
        sort(list.begin(),list.end());
        reverse(list.begin(),list.end());
        
        int pro =0;
        int day =0;
        int j =0;
        while(1){
            if(list[j]-day*2<=0){
                break;
            }
            if(list[j]-day*2==1){
                pro+=1;
                break;
            }else{
                pro+=(list[j]-day*2-1);
                day+=2;
                j++;
            }
        }
       cout << n-pro<<endl;
    }
}