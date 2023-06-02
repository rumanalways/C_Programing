/* print the factorial of a number n.

print reverse of the table for a number n.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    int fact = 1;
    for(int i = 1; i<=n;i++)
    {
        fact = fact * i;
    }
    for(int i =10; i>=1; i--)
    {
        printf("%d\n",n*i);
    }
    printf("The Factorial is:%d\n", fact);

    return 0;
}