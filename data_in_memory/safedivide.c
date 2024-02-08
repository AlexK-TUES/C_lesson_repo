#include<stdio.h>
#include"safeint.h"

int main(struct SafeResult result,int argn,char **argv){
    safedivide(argv[1],argv[2]);
    if (result.errorflag=="1"){
        printf("An Error ocurred (devision by 0)!\n");
    }
    else printf("%d",result.value);

    return 0;
}