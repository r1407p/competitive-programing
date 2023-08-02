#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;scanf("%d",&t);
    int now;
    int max = -1;
    for(int i =0;i<t;i++){
        scanf("%d",&now);
        if(now>max)max = now;
        else break;
    }
    printf("%d",max);
}