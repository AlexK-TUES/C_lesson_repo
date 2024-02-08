#include <stdio.h>
#include"mystrings.h"

int main(int argc,char ** argv){
    if(argc<3) {printf("Invalid number of arguments");
    return 0;}

    strcompare(argv[1], argv[2]);

    return 0;
}