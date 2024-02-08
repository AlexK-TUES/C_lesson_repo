#include <stdio.h>
#include <math.h>

//to compile use the command gcc ex4.c -o ex4.out -lm

int main(void) {
    long numba[] = {5,8,4,8,3,7,3,8,3,9,32,8,3,78};
    for(int i = 0; i<14;i++) {
        numba[i] = pow(numba[i], 4);
        printf("%ld,",numba[i]);
    }
    return 0;
}