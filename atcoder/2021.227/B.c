#include<stdio.h>
int main(){
    int arr[1005]={1};
    int temp;
    for(int i = 1;i<170;i++){
        for(int j =i;j<170;j++){
            temp = 4*i*j+3*(i+j);
            if(temp<1001)arr[temp]=1;
        }
    }
    int t;scanf("%d",&t);
    int ans=0;
    int input;
    for(int i =0;i<t;i++){
        scanf("%d",&input);
        if(arr[input]==0)ans++;
    }
    printf("%d",ans);
}