#include <stdio.h> 

int main() 
{ 
    int x = 15, y = 25, max; 
    max = (x > y) ? x : y; 
    while (1) { 
        if (max % x == 0 && max % y == 0) { 
            printf("NOK na %d i %d e: %d.", x, y, max); 
            break; 
        } 
  
        ++max; 
    } 
  
    return 0; 
}