#include<stdio.h>
int main(){
    int arr[3];for(int i =0;i<3;++i)scanf("%d",arr+i);
    int total = arr[0]+arr[1];
    int drink =0;
    while(total>=arr[2]){
        int temp = total/arr[2];
        drink +=temp;
        total-=temp*arr[2];
        total +=temp;
    }
    printf("%d",drink);
}
