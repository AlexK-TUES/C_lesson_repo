#ifndef SAFEINT_H
#define SAFEINT_H
#include <stdio.h>

struct SafeResult{
    int value;
    char errorflag;
};

int safeadd(int a,int b);
int safesubtract(int a,int b);
int safemultiply(int a,int b);
int safedivide(int a,int b);
int safestrtoint(char a);

#endif