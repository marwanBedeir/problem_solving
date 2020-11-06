#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b,n,z;
    b=1;
    x=0;

    printf("inter the number\n");
    scanf("%d",&n);

    printf("inter the power\n");
    scanf("%d",&z);

    do
    {
        b=b*n;
        x++;
    }while(x<z);

    printf("\n%d power %d is : %d\n",n,z,b);
    return 0;
}
