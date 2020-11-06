#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num[10];
   size_t x;
   int smallest,greatest;
   float avr,sum=0;

   printf(" Enter ten numbers \n");
   for(x=0;x<10;x++)
    {
      scanf("%d",&num[x]);
    }

    smallest=num[0];
    greatest=num[0];

    for(x=0;x<10;x++)
    {
        if(num[x]<smallest)
            smallest=num[x];

        if(num[x]>greatest)
            greatest=num[x];

        sum=sum+num[x];
    }
    avr=sum/10;

    printf("\n The maximum number is : %d \n\n The minimum number is : %d \n\n The average is : %.2f\n\n",greatest,smallest,avr);
    return 0;
}
