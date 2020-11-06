#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,m;

    x=2;

    printf("enter your number\n");
    scanf("%d",&m);

    if (m==2)
    {
        printf("prime");
        return 0;
    }
    else if (m==1)
    {
        printf("not prime");
        return 0;
    }
    else
    {
    do
    {
        if (m%x==0)
        {
            printf("not prime");
            return 0;
        }
        else {x=x+1;}
    }while (x != m);
    printf("prime");
    }
    return 0;
}
