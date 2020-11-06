#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int sum=0,pro=1,i;

   for (i=2; i<=30; i++)
   {
       if (i%2==0)
        sum=sum+i;
       else
        pro=pro*i;
   }
   printf("sum = %lld and product = %lld",sum,pro);
    return 0;
}
