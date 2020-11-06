#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,d,c,sum;
    float avr;

    printf("enter the number\n");
    scanf("%d",&n);

    printf("\nenter the number of period`s start\n");
    scanf("%d",&d);

    printf("\nenter the number of period`s end\n");
    scanf("%d",&c);

    sum=0;
    b=0;

    do
    {
        if (d%n==0)
        {
            sum=sum+d;
            d++;
            b=b+1;
        }
        else d++;
    }while(d<=c);
    avr=sum/b;

    printf("\nsum is %d and avr is %f\n",sum,avr);

    return 0;
}
