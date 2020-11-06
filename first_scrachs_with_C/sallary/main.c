#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,t,n;

    printf("enter your gross salary\n");

    scanf("%f",&s);

    if (s>=1000)
        t=s*0.12;

    else if (s>=500)
        t=s*0.1;

        else t=s*0.08;
    n=s-t-20;

    printf("your net is : %f\n",n);
    return 0;
}
