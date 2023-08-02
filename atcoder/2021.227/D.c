#include<stdio.h>
void swap(long long int *a,long long int *b);
void quicksort(long long int *arr,long long int left,long long int right);
int main(){
    long long int department,people;scanf("%d %d",department,people);
    long long int arr[department];
    for(int i =0;i<department;i++)scanf("%lld",arr+i);
    quicksort(arr,0,department-1);
    int limit;
    for(int i =0;i<3;);








}
void swap(long long int *a,long long int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
void quicksort(long long int *arr,long long int left,long long int right){
    if(left>=right)return;
    long long int i = left;
    long long int j =right;
    long long int pivot = left;
    while(i<j){
        while(arr[i]<=arr[pivot])i++;
        while(arr[pivot]<arr[j])j--;
        if(i<j)swap(arr+i,arr+j);
    }
    swap(arr+j,arr+pivot);
    quicksort(arr,left,j-1);
    quicksort(arr,j+1,right);
}