#include<stdio.h>
#include"safeint.h"

int main(struct SafeResult result,int argn,char **argv){
    safestrtoint(argv[1]);
    printf("%d",result.value);

    return 0;
}