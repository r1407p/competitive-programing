#include<stdio.h>
int main(){
    int N,K,start;scanf("%d %d %d",&N,&K,&start);
    K%=N;
    int final = start+K-1;
    if(final>N)final-=N;
    if(final==0)printf("%d",N);
    else printf("%d",final);
}