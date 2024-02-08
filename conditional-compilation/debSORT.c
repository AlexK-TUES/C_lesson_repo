#include <stdio.h>
#define SIZE 10
#define DEBUG

void arrSort(int *arr){
    int temp;
    int sorting=0;
    while(1){
for(int i=0; i<SIZE; i++){
    if (arr[i]>arr[i+1]) {
        sorting = 1;
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
} if(!sorting) break;
        sorting = 0;
}
}

int isDivByThr(int *arr){
    int sum = 0;
    for(int i=3;i<SIZE;i=i+3){
        sum+=arr[i];
        printf("\n %d",arr[i]);
    }
    return sum;
}

void main(){
int arr[SIZE]={34,65,73,12,31, 53, 757, 34,21, 76};
    arrSort(arr);
    #ifdef DEBUG
    for(int i=0;i<SIZE;i++){
        printf("%d \n",arr[i]);
    }
    isDivByThr(arr);
    #endif
    printf("%d", isDivByThr(arr));
}