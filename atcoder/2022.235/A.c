#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t ;scanf("%d",&t);
    int sum = t;
    int temp = t/100;
    t%=100;
    t = t*10+temp;
    sum +=t;
    temp = t/100;
    t%=100;
    t = t*10+temp;
    sum +=t;
    printf("%d",sum);
}