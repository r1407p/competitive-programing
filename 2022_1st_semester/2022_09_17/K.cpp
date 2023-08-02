#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int h,w,n;
    ifstream fin("kotlin.in");
    ofstream fout("kotlin.out");
    fin >> h>>w>>n;
    vector<vector<char>> mp(h,vector<char>(w,'.'));
    int a =-1,b=-1;
    for(int i =1;i<=50;i++){
        if(n%i==0){
            a = i;
            b=  n/i;
           // cout << a<<" "<<b ;
            if(a<=(h+1)/2&&b<=((w+1)/2)){
                break;
            }else if(a<=(w+1)/2&&b<=((h+1)/2)){
                swap(a,b);
                break;
            }else{
                a = -1;
                b= -1;
            }
        }
    }
    if(a==-1&&b==-1){
        fout << "Impossible";
        return 0;
    }
    a-=1;
    b-=1;
    //fout  << a <<" " <<b<< endl;
    for(int i =1;i<h&&a;i+=2,a--){
        for(int j =0;j<w;j++){
            mp[i][j] = '#';
        }
    }
    for(int i =1;i<w&&b;i+=2,b--){
        for(int j =0;j<h;j++){
            mp[j][i] = '#';
        }
    }
    for(int i =0;i<h;i++){
        for(int j =0;j<w;j++){
            fout << mp[i][j];
        }
        fout << endl;
    }
    

}