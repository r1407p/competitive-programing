#include<stdio.h>
int main(){
    int arr[8];for(int i =0;i<8;++i)scanf("%d",arr+i);
    int size[8]={1,2 , 3, 5, 7, 11, 13, 17};
    int sum = 9699689;
    int current=0;
    for(int i =0;i<8;i++){
        int temp =arr[i];
        for(int j =0;j<=i;j++){
            temp *=size[j]; 
        }
        current+=temp;
    }
    printf("%d",sum-current);
}