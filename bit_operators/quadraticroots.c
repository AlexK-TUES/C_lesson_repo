#include <stdio.h>
#include"quadraticroots.h"
#include<math.h>

    int findroots(double a, double b, double c){
        struct QuadraticRootsResult result;
        double D = pow(b,2)-4*a*c;
        printf("D:%lf\n",D);
        if (D >= 0) {
            result.norealroots = 0;
            if(a!=0){
                result.x1 = (-b - sqrtl(D))/(2*a); 
                result.x2 = (-b + sqrtl(D))/(2*a);}
            else {
                result.x1 = -c/b;
                result.x2 = result.x1;

            }   
        printf("X1:%lf\nX2:%lf\n",result.x1,result.x2);
        }
        else {result.norealroots = 1;
        printf("Error: no real roots\n");
        }
        printf("%d\n",result.norealroots);
        return 0;
    }
    