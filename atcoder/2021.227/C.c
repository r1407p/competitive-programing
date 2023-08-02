#include<stdio.h>
#include<math.h>
int main(){
    long long int t;scanf("%lld",&t);
    long long int ans =0;
    long long int maxA = pow(t,1.0/3);//temp^3<=t;
    long long int temp = pow(maxA,3);
    if(temp ==t);
    else if(temp<t){
        while(temp<t){
            maxA++;
            temp = pow(maxA,3);
        }
        if(temp==t);
        else maxA--;
    }
    else{
        while(temp>t){
            maxA--;
            temp = pow(maxA,3);
        }
        if(temp==t);
        else maxA++;
    }
    for(long long int i =1;i<=maxA;i++){//i = A and limit the target;
        long long int target = t/i;//new target;
        long long int temp2 = pow(target,0.5);//find the new limit;
        for(long long int j = i;j<=temp2;j++){
            long long int newtarget = target/j;
            ans+=(newtarget-j+1);
        }
    }
    printf("%lld",ans);
}