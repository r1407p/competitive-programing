#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b;
    vector<vector<int>>A;
    for(int i =0;i<a;i++){
        A.push_back({});
        for(int j =0;j<b;j++){
            int temp;
            cin >>temp;
            A[i].push_back(temp);
        }
    }
    cin >>c>>d;
    vector<vector<int>>B;
    for(int i =0;i<c;i++){
        B.push_back({});
        for(int j =0;j<d;j++){
            int temp;
            cin >>temp;
            B[i].push_back(temp);
        }
    }
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            if(A[i][j]==B[0][0]){
                vector<int> x(c,-1);
                vector<int> y(d,-1);
                x[0] = i;
                y[0] = j;
                int t = i+1;
                int r = 1;
                while(t<a&&r<c){
                    if(A[t][j]==B[r][0]){
                        x[r] = t;
                        r++;
                    }else{
                        t++;
                    }
                }
                if(r!=c)continue;
                t = j+1;
                r = 1;
                while(t<b&&r<a){
                    if(A[i][t]==B[0][r]){
                        y[r] = t;
                        r++;
                    }else{
                        t++;
                    }
                }
                if(r!=d)continue;
                for(t =0;t<c;t++){
                    for(r =0;r<d;r++){
                        if(B[t][r]!=A[x[t]][y[r]]){
                            goto out;
                        }
                    }
                }
                cout <<"Yes";
                return 0;
                out:
                    ;
            }
        }
    }
    cout <<"No";
}