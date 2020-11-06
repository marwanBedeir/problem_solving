#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,x1,y1,z1;

   printf("enter 3 numbers\n");

   scanf("%d%d%d",&x,&y,&z);

    x1=x*x;
    y1=y*y;
    z1=z*z;

    if (x1>y1)
    {
        if (x1>z1)
        {
         printf("the max number is : %d\n",x);
        }
        else {printf("the max number is : %d\n",z);}


    }

    else
        {
        if (y1>z1)
        {printf("the max number is : %d\n",y);}
       else {printf("the max number is%d\n",z);}

        }

    return 0;
}

