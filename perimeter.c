// calculate perimeter of rectangle
#include<stdio.h>
int main ()
{
    float a, b, perimerter;

    printf("Enter your rectangle a: \n");
    scanf("%f", &a);
    printf("Enter your rectangle b: \n");
    scanf("%f", &b);

    perimerter = 2 * (a+b);
    printf("perimeeter of rectangle is: %.2f\n ", perimerter);
    
    return 0;
}