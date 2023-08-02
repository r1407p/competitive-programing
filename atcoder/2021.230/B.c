#include<stdio.h>
int main(){
    char string[11];gets(string);
    int pivot= 0;
    while(string[pivot]!='\0')pivot++;
    printf("%d",pivot);
    int flag =0;
    if(string[0]=='o'){     //OX OO
        if(string[1]=='o'){
            printf("No");
            return 0;
        }
    }
    else{       //XX XO
        if(string[1]=='x')flag =1;
    }
    for(int i =1;i<pivot-1;i++){ 
        if(string[i]==string[i+1]){//OO
            if(string[i]=='o'){
                printf("No");
                return 0;
            }
            else{//XX
                if(flag){ // X XX
                    printf("No");
                    return 0 ;
                }  //O XX
                else flag =1;
            }
        }
        else{// 
            if(string[i]=='x'){//XO
                if(!flag){
                    printf("No");
                    return 0 ;
                }
            }
            else flag =0;
        }
    }
    printf("Yes");
}