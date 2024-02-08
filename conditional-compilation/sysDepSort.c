#include <stdio.h>
void main(){
    int arr[6]={1,7,6,9,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    #ifdef _Win32
            for (int step = 0; step < size - 1; ++step) {
                for (int i = 0; i < size - step - 1; ++i) {
                    if (arr[i] > arr[i + 1]) {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }
    #endif
    #ifdef _linux_
        for(int i = 0; i < size - 1; i++){
        int position=i;
            for(int j = i + 1; j < size; j++){
                if(arr[position] > arr[j]) position=j;}
                if(position != i){
                int swap=arr[i];
                arr[i]=arr[position];
                arr[position]=swap;
}
}
    #endif
    #ifdef TARGET_OS_MAC
        for (int step = 1; step < size; step++){
            int key = arr[step];
            int j = step - 1;
            while (key < arr[j] && j >= 0){
                arr[j + 1] = arr[j];
                --j;}
            arr[j + 1] = key;}
    #endif
    for (int i=0;i<size;i++){
        printf("%d \n",arr[i]);
        }

  //Code is untested. All code has been provided by programiz.com and geeksforgeeks.org with changed var names and structure
}
