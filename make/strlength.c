#include<stdio.h>
#include"mystrings.h"

int main(int argc, char ** argv){
    if (argc<2) {printf("No string to measure imputed");
    return 0;}

    strlength(argv[1]);

    return 0;
}