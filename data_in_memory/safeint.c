#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include"safeint.h"

int safeadd(int a,int b){
    struct SafeResult result;
    result.value=0;
    if (a > INT_MAX - b) {
        result.errorflag = "1";}
    else {
        result.errorflag = "0";
        result.value = a + b;
}
return result.value,result.errorflag;
}

int safesubtract(int a,int b){
    struct SafeResult result;
    result.value=0;
    if (a<INT_MIN-b){
        result.errorflag = "1";}
    else {
        result.errorflag = "0";
        result.value = a - b;
    }
    return result.value,result.errorflag;
    }

int safemultiply(int a,int b){
    struct SafeResult result;
    int temp = a*b;
    if(a==temp/b){
        result.value = temp;
        result.errorflag = "0";
    }
    else {
        result.value = "0";
        result.errorflag = "1";
    }
}

int safedivide(int a,int b){
    struct SafeResult result;
    if(b==0){
        result.value = 0;
        result.errorflag = "1";
    }
    else {
        result.value = a/b;
        result.errorflag = "0";
    }
}

int safestrtoint(char a){
    struct SafeResult result;
    result.value = atoi(a);
    result.errorflag = "0";
}