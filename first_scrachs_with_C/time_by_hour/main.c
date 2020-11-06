#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,h,m,s;

    printf("enter the time by seconds\n");
    scanf("%d",&t);

    h=t/(60*60);
    m=t/60;
    s=t%60;

    printf("\n\nthe time is : %d hours and %d minutes and %d seconds\n",h,m,s);
    return 0;
}
