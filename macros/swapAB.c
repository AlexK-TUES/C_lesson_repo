#include <stdio.h>

int a,b,c;

int main()
{
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n",a,b);
    return 0;
}