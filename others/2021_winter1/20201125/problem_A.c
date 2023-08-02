#include<stdio.h>
int main(){
    int A,B,C,D;scanf("%d %d %d %d",&A,&B,&C,&D);
    int man[3];for(int i =0;i<3;i++)scanf("%d",man+i);
    int period1 = A+B,period2 =C+D;
    for(int i =0;i<3;++i){
        int temp =0;
        int biteA = man[i]%period1;
        int biteB = man[i]%period2;
        if(biteA<=A &&biteA !=0)temp++;
        if(biteB<=C &&biteB !=0)temp++;
        if(temp ==0)printf("none\n");
        else if(temp==1)printf("one\n");
        else printf("both\n");
    }
}