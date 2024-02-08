#include <stdio.h>
#include <math.h>
#define ARR_SIZE 5

int crARR(int arr[]){
    for (int i=0; i<ARR_SIZE;i++)
        arr[i] = (int)pow(2,i);
    return 0;
}



int main(){
    int arr[ARR_SIZE];
    #ifdef ARR_SIZE
    crARR(arr);
    for (int t=0; t<ARR_SIZE; t++) printf("%d \n",arr[t]);
    #endif
    return 0;
}