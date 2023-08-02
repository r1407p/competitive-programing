#include<stdio.h>
int main(){
    int difference;scanf("%d",&difference);
    int rita;scanf("%d",&rita);
    int Theo;scanf("%d",&Theo);
    int sum = rita+Theo;
    int temp =0;
    int base1 = 4;
    int base2 = 3;
    int flag = 0;
    int n=1;
    while(sum >0){
        if(n==difference)flag =1;
        sum-=base1;
        temp +=base1;
        base1++;
        n++;
        if(flag){
            sum-=base2;
            base2++;
        }
    }
    printf("%d",rita-temp);
}