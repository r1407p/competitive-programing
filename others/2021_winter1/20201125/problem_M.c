#include<stdio.h>
#include<math.h>

int main(){
    int h,v;scanf("%d %d",&h,&v);
    if(v<=180)printf("safe");
    else{
        double angle = abs(v-270);
        double time = h/cos(angle*M_PI/180);
        printf("%.0f",floor(time));
    }
}