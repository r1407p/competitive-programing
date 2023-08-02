#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    if(n>=42)n++;
    if(n<10)printf("AGC00%d",n);
    else if(n<100)printf("AGC0%d",n);
    else printf("AGC%d",n);
}