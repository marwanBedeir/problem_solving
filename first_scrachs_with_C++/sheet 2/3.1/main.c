#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],sum_odd=0,sum_even=0;
    size_t x;

    printf(" Enter ten numbers \n");
    for(x=0;x<10;x++)
    {
      scanf("%d",&num[x]);
    }

    for(x=0;x<10;x++)
    {
        if(num[x]%2==0)
            sum_even=sum_even+num[x];
        else
            sum_odd=sum_odd+num[x];
    }

    printf("\n The sum of even number = %d\n\n The sum of odd number = %d",sum_even,sum_odd);
    return 0;
}
