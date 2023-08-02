#include<stdio.h>
#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    for(int i =0;i<t;++i){
        long long int arr[5];for(int j =0; j<5;j++)scanf("%d",arr+j);
        int power =0;//2**power
        while(arr[0]!=1){
            arr[0]/=2;
            power++;
        }
        int x_p =0;
        arr[1]++;
        while(arr[1]!=0){
            arr[1]/=2;
            x_p++;
        }
        printf("%d",x_p);
        int map[arr[3]][arr[4]];

        

    }
}