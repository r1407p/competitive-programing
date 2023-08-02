#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int total =0;
    ifstream fin("intel.in");
    ofstream fout("intel.out");
    
    int _;
    fin>>_;
    _--;
    
    int a,b,x,y;
    int minx,miny,maxx,maxy;
    fin >>x>>y;
    int tx = x;
    int ty = y;
    minx = x;
    miny = y;
    maxx = x;
    maxy = y;
    cout << total << " "<< maxx<<" " <<minx<<" "<<maxy <<" "<<miny<<endl;
    for(int i =0;i<_;i++){
        a = x;
        b = y;
        fin >>x>>y;
        total+=abs(a-x);
        total+=abs(b-y);
        minx = min(x,minx);
        maxx = max(x,maxx);
        miny = min(y,miny);
        maxy = max(y,maxy);
    //    cout << total << " "<< maxx<<" " <<minx<<" "<<maxy <<" "<<miny<<endl;
    }
    total+=abs(x-tx);
    total+=abs(y-ty);
    //cout << total << " "<< maxx<<" " <<minx<<" "<<maxy <<" "<<miny<<endl;
    fout << total-(maxx-minx)*2-(maxy-miny)*2;
    
}