#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,n;
    x=2;

    printf("enter the number\n");
    scanf("%f",&n);

    do
    {
    if (x==n/x)
        {
            printf("this number is a perfect square");
            return 0;
        }
        else {x=x+1;}

    }while (x!=n);

    printf("this number is not a perfect square");

    return 0;
}
