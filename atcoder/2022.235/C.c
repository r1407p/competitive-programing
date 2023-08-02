#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct List{
    int val;
    int now;
    struct List *last;
    struct List *next;
}arr[200005];
typedef struct List list;
int main(){
    int max =0;
    int a,b;scanf("%d %d",&a,&b);
    for(int i =0;i<a;i++){
        int temp;
        scanf("%d",&temp);
        int flag = 1;
        for(int j =0;j<max;j++){
            if(arr[j].val == a){
                flag =0;
                arr[j].now++;
                (arr[j].last)->next =add(i+1);
                arr[j].last = arr[j].last->next;
            }
        }
        if(flag){
            arr[max].val = temp;
            arr[max].now = i+1;
            arr[max].last = &arr[max];
            max++;
        }
    }
    for(int i =0;i<b;i++){
        int find,time;
        scanf("%d %d",&find,&time);
        int flag=1;
        int ans;
        for(int j =0;j<max;j++){
            if(arr[j].val == find){
                flag =0;
                int index = 1;
                list *ptr = arr[j].next;
                while(index<find&&ptr){
                    ptr = ptr->next;
                    index++;
                }if(index<find){
                    ans = ptr->now;
                }else{
                    flag =1;
                }
            }
        }
        if(flag)printf("-1");
        else printf("%d",ans);
    }   
}
list *add(int i ){
    list *node = malloc(sizeof(list));
    node->now = i;
    node->next = NULL;
    return node;
}