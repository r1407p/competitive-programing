#include<stdio.h>
#define column 80
#define row 100
int main(){
    char current[column+1];
    int i=0;
    int sum =0;
    int log =0;
    while(scanf("%s",&current)!=EOF){
        while(current[i]!='\0'){
            if(current[i]=='*')log++;
            i++;
        }//i=column;log=*;
        for(int j =0;j<i-log-sum;++j)printf(".");
        for(int j =0;j<log;j++)printf("*");
        for(int j =0;j<sum;++j)printf(".");
        printf("\n");
        sum+=log;
        if(i==sum){
            printf("\n");
            sum=0;
        }
        i=0;log=0;
    }
}