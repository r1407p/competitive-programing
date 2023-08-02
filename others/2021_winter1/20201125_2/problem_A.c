#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i =0;i<3;i++)for(int j =0;j<3;j++)scanf("%d",&arr[i][j]);
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            arr[i][j] = (4-arr[i][j])%4;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    




}