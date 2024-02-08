#include <stdio.h>
#include "quadraticroots.h"

void main(void){
    int a=0,b=9,c=3;
    double a_d=(double)a,b_d=(double)b,c_d=(double)c;
    float a2=0.5,b2=7.3,c2=5.6;
    double a2_d=(double)a2,b2_d=(double)b2,c2_d=(double)c2;
    double a3=4.643097,b3=10.26092735,c3=1.12450235;
    findroots(a_d,b_d,c_d);
    findroots(a2_d,b2_d,c2_d);
    findroots(a3,b3,c3);
}