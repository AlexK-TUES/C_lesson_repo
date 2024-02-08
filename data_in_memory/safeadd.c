#include<stdio.h>
#include"safeint.h"

int main(struct SafeResult result,int argn,char **argv){   
    safeadd(argv[1],argv[2]);
    if (result.errorflag=="1"){
        printf("An Error ocurred (intiger overflow)!\n");
    }
    else printf("%d",result.value);

    return 0;
}