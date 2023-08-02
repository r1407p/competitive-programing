#include<stdio.h>
#include<string.h>
int main(){
    int t ;scanf("%d",&t);
    for(int i  =0;i<t;i++){
        int number;scanf("%d",&number);
        char category[30][21];
        char item[30][21];
        int arr[30];
        int itemp=0;
        int pivot =0;
        for(int j =0;j<number;j++){
            char temp[21];
            scanf("%s",temp);
            int no = 0;
            for(int k =0;k<itemp;k++){
                if(strcmp(item[k],temp)==0){
                    no = 1;
                    break;
                }
            }
            if(no);
            else{
                strcpy(item[itemp],temp);
                itemp++;
            }
            gets(temp);
            if(no)continue;
            int flag =1;
            for(int k =0;k<pivot;k++){
                if(strcmp(category[k],temp)==0){
                    arr[k]++;
                    flag = 0;
                    break;
                }
            }
            if(flag){
                strcpy(category[pivot],temp);
                arr[pivot]=1;
                pivot++;
            }
        }
        int ans =1;
        for(int k =0;k<pivot;k++){
            ans*=(arr[k]+1);
        }
        printf("%d\n",ans-1);

    }
}