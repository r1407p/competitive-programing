#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0;i< t;i++){
        int a;
        int b;
        cin >> a >>b;
        string s1,s2;
        cin >>s1>>s2;
        bool flag = true;
        for(int j = 0;j<b-1;j++){
            if(s2[b-j-1]!=s1[a-j-1]){
                flag = false;
                break;
            }
        }
        //cout << flag<<endl;
        if(flag==false){
            cout <<"NO"<<endl;
            continue;
        }
        flag = false;
        for(int j =0;j<=a-b;j++){
         //   cout << s1[j];
            if(s1[j]==s2[0]){
                flag = true;
            }
        }
      //  cout << flag<<endl;
        if(flag)
            cout <<"YES"<<endl;
        else 
            cout << "NO"<<endl;
    }


}