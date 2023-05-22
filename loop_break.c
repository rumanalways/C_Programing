/*
Keep taking numbers as input from user until user enters an odd number.
*/
#include<stdio.h>
int main ()
{
    int n;
    do {
        printf("Enter the Number");
        scanf("%d", &n);
        printf("The Number is: %d\n", n);

        if(n % 2 != 0)
        {
            break;
        }

    } while (1);
    printf(" Thank you ");
    
    return 0;
}