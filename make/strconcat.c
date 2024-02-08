#include<stdio.h>
#include"mystrings.h"

int main(int argc, char **argv){
  if(argc<3) {printf("Invalid number of arguments");
  return 0;}
  if(strlength(argv[1]) || strlength(argv[2]) >50) {printf("Arguments with more than 50 chars are not supported");
  return 0; }
  
  strconcat(argv[1],argv[2]);

  return 0;
}