// print all the Odd number from 5 to 55.
#include<stdio.h>
int main ()
{
    for(int i = 5; i<=50; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}