/*
Print the Sum of First n Natural Number.
n = 4
Also, print them in reverse
*/

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int sum = 0;
    for(int j= 1;j<=n;j++)
    {
        sum +=j;
    }
    for(int i=n;i>=1; i--)
    {
        printf("%d\n",i);
    }
    printf("sum is: %d\n", sum);

    return 0;
}