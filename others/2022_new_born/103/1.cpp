#include<iostream>

using namespace std;
int main(){
    double y,v,a,s;
    double t1,t2;
    while(cin >> y>>v>>a>>t1>>t2>>s){
        s/=3.6;
        double can = v*t2;
        t1-=t2;
        if(v+a*t1>s){
            can+=v*t1;
            double temp = (s-v)/a;
            can+=temp*(s-v)/2.0;
            can+=(s-v)*(t1-temp);
        }else{
            can +=v*t1;
            can +=a*t1*t1/2.0;
        }
       // cout << can;
        if(can>=y)cout <<"Pass";
    else cout << "Stop";
    }
    


}