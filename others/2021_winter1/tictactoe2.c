#include<stdio.h>
int main(){
    int t = gets(t);
    for(int tt =0;tt<t;++tt){
        char chart[3][4];
        for(int i =0;i<3;++i){
            for(int j =0;j<3;++j){
            scanf("%c",&chart[i][j]);
            }
        } 
        for(int i =0;i<3;++i){
            for(int j =0;j<3;++j){
            printf("%c",chart[i][j]);
            }
        } 
        if(chart[1][1]=='X'){
            if(chart[0][0]=='X' && chart[2][2]=='X'){
                printf("yes\n");continue;
            }
            if(chart[1][0]=='X' && chart[1][2]=='X'){
                printf("yes\n");continue;
            }
            if(chart[2][0]=='X' && chart[0][2]=='X'){
                printf("yes\n");continue;
            }
            if(chart[0][1]=='X' && chart[2][1]=='X'){
                printf("yes\n");continue;
            }
        }
        else if(chart[0][0]==chart[1][0]&&chart[0][0]==chart[2][0]&&chart[0][0]=='X'){
            printf("yes\n");continue;
        }
        else if(chart[0][0]==chart[1][0]&&chart[0][0]==chart[2][0]&&chart[0][0]=='X'){
            printf("yes\n");continue;
        }
        else if(chart[0][0]==chart[1][0]&&chart[0][0]==chart[2][0]&&chart[0][0]=='X'){
            printf("yes\n");continue;
        }
        else if(chart[0][0]==chart[1][0]&&chart[0][0]==chart[2][0]&&chart[0][0]=='X'){
            printf("yes\n");continue;
        }
        else{
            printf("no\n");
        }
    }
}