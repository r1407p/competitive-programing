#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    vector<vector<int>> used;
    int temp;
    for(int i =0;i<4;i++){
        used.push_back({});
        for(int j =0;j<2;j++){
            cin >>temp;
            used[i].push_back(temp);
        }
   }
   int a = used[0][0];
   int b = used[0][1];
   for(int i =0;i<3;i++){
        used[i][0] = used[i+1][0]-used[i][0];
        used[i][1] = used[i+1][1]-used[i][1];
   }
   used[3][0] = a-used[3][0];
   used[3][1] = b-used[3][1];   
   if(used[0][0]!=-used[2][0]||used[1][0]!=-used[3][0]|| used[0][1]!=used[2][1] ||used[1][0]!=-used[3][0])cout <<"No";
   else{
        if(used[0][0]*used[1][0]!=-used[0][1]*used[1][1])cout <<"No";
        else if(used[1][0]*used[2][0]!=-used[1][1]*used[2][1])cout <<"No";
        else if(used[2][0]*used[3][0]!=-used[2][1]*used[3][1])cout <<"No";
        else if(used[3][0]*used[0][0]!=-used[3][1]*used[0][1])cout <<"No";
        else {
            cout <<"Yes";
        }
   }











}