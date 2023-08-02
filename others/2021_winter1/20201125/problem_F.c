#include<stdio.h>
int main(){
    char space;
    int a,b;scanf("%d %d",&a,&b);scanf("%c",&space);
    char arr[a+2][b+2];
    for(int i=1;i<=a;++i){
        for(int j=1;j<=b;j++)scanf("%c",&arr[i][j]);
        scanf("%c",&space);
    }
    int n=0;
    for(int i=1;i<=a;++i){
        for(int j=1;j<=b;j++){
            if(arr[i][j]=='#'){
                int flag=1;
                n+=1;
                int r=i,t=j;
                while(flag){
                    if(arr[r-1][t-1]=='#'){
                        arr[r-1][t-1]='.';
                        r= r-1;t=t-1;
                    }
                    else if(arr[r-1][t]=='#'){
                        arr[r-1][t]='.';
                        r= r-1;
                    }
                    else if(arr[r-1][t+1]=='#'){
                        arr[r-1][t+1]='.';
                        r= r-1;t=t+1;
                    }
                    else if(arr[r][t-1]=='#'){
                        arr[r][t-1]='.';
                        t=t-1;
                    }
                    else if(arr[r][t+1]=='#'){
                        arr[r][t+1]='.';
                        t=t+1;
                    }
                    else if(arr[r+1][t-1]=='#'){
                        arr[r+1][t-1]='.';
                        r= r+1;t=t-1;
                    }
                    else if(arr[r+1][t]=='#'){
                        arr[r+1][t]='.';
                        r= r+1;
                    }
                    else if(arr[r+1][t+1]=='#'){
                        arr[r+1][t+1]='.';
                        r= r+1;t=t+1;
                    }
                    else flag =0;
                }
                
            }

        }
    }
    printf("%d",n);   
}